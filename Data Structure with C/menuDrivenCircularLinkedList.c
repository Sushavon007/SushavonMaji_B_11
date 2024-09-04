#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void display() {
    if (head == NULL) {
        printf("The circular linked list is empty.\n");
        return;
    }
    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("Head\n");
}
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        head->next = head;
    } else {
        newNode->next = head;
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        head = newNode;
    }
    printf("Node with data %d inserted at the beginning.\n", data);
}
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        head->next = head;
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
    printf("Node with data %d inserted at the end.\n", data);
}
void deleteFromBeginning() {
    if (head == NULL) {
        printf("The circular linked list is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = head;
    if (head->next == head) {
        head = NULL;
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = head->next;
        head = head->next;
    }
    free(temp);
    printf("Node deleted from the beginning.\n");
}
void deleteFromEnd() {
    if (head == NULL) {
        printf("The circular linked list is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = head;
    if (head->next == head) {
        head = NULL;
    } else {
        struct Node* current = head;
        while (current->next->next != head) {
            current = current->next;
        }
        temp = current->next;
        current->next = head;
    }
    free(temp);
    printf("Node deleted from the end.\n");
}
void deleteAfter(int key) {
    if (head == NULL) {
        printf("The circular linked list is empty. Nothing to delete.\n");
        return;
    }
    struct Node* current = head;
    struct Node* temp = NULL;
    do {
        if (current->data == key) {
            temp = current->next;
            current->next = temp->next;
            free(temp);
            printf("Node with data %d deleted.\n", key);
            return;
        }
        current = current->next;
    } while (current != head);
    printf("Node with data %d not found in the circular linked list.\n", key);
}
void deleteCircularLinkedList() {
    if (head == NULL) {
        printf("The circular linked list is already empty.\n");
        return;
    }
    struct Node* current = head;
    while (current->next != head) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(head);
    head = NULL;
    printf("Circular linked list deleted.\n");
}
int main() {
    int choice, data, key;
    while (1) {
        printf("\nCircular Linked List Operations Menu:\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display the circular linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Delete a node from the beginning\n");
        printf("6. Delete a node from the end\n");
        printf("7. Delete a node after a given node\n");
        printf("8. Delete the entire circular linked list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data for the first node: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 4:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 5:
                deleteFromBeginning();
                break;
            case 6:
                deleteFromEnd();
                break;
            case 7:
                printf("Enter the data of the node after which you want to delete: ");
                scanf("%d", &key);
                deleteAfter(key);
                break;
            case 8:
                deleteCircularLinkedList();
                break;
            case 9:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}