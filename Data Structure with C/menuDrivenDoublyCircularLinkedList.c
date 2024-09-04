#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void createCircularDoublyLinkedList() {
    int n, value;
    struct Node *newNode, *temp;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of nodes should be greater than 0.\n");
        return;
    }
    head = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter data for node 1: ");
    scanf("%d", &value);
    head->data = value;
    head->prev = head;
    head->next = head;
    temp = head;
    for (int i = 2; i <= n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = head;
        newNode->prev = temp;
        temp->next = newNode;
        temp = temp->next;
        head->prev = temp;
    }
    printf("Circular doubly linked list created successfully.\n");
}
void displayCircularDoublyLinkedList() {
    struct Node *temp;
    if (head == NULL) {
        printf("Circular doubly linked list is empty.\n");
        return;
    }
    temp = head;
    printf("Circular doubly linked list elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void insertAtBeginning(int value) {
    struct Node *newNode, *last;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot insert at the beginning.\n");
        return;
    }
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    last = head->prev;
    newNode->data = value;
    newNode->next = head;
    newNode->prev = last;
    head->prev = newNode;
    last->next = newNode;
    head = newNode;
    printf("Node inserted at the beginning successfully.\n");
}
void insertAtEnd(int value) {
    struct Node *newNode, *last;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot insert at the end.\n");
        return;
    }
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    last = head->prev;
    newNode->data = value;
    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;
    printf("Node inserted at the end successfully.\n");
}
void deleteFromBeginning() {
    struct Node *last, *temp;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot delete from the beginning.\n");
        return;
    }
    last = head->prev;
    temp = head;
    if (head->next == head) {
        head = NULL;
    } else {
        head = head->next;
        last->next = head;
        head->prev = last;
    }
    free(temp);
    printf("Node deleted from the beginning successfully.\n");
}
void deleteFromEnd() {
    struct Node *last, *temp;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot delete from the end.\n");
        return;
    }
    last = head->prev;
    temp = last;
    if (last->prev == last) {
        head = NULL;
    } else {
        last = last->prev;
        last->next = head;
        head->prev = last;
    }
    free(temp);
    printf("Node deleted from the end successfully.\n");
}
void deleteAfterNode(int afterValue) {
    struct Node *temp, *toDelete;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot delete after a node.\n");
        return;
    }
    temp = head;
    do {
        if (temp->data == afterValue) {
            toDelete = temp->next;
            temp->next = toDelete->next;
            toDelete->next->prev = temp;
            free(toDelete);
            printf("Node deleted after %d successfully.\n", afterValue);
            return;
        }
        temp = temp->next;
    } while (temp != head);
    printf("Node with given data not found or there is no node after it.\n");
}
void deleteEntireCircularDoublyLinkedList() {
    struct Node *temp, *toDelete;
    if (head == NULL) {
        printf("Circular doubly linked list is empty. Cannot delete entire list.\n");
        return;
    }
    temp = head;
    do {
        toDelete = temp;
        temp = temp->next;
        free(toDelete);
    } while (temp != head);
    head = NULL;
    printf("Entire circular doubly linked list deleted successfully.\n");
}
int main() {
    int choice, data;
    while (1) {
        printf("\n----- Circular Doubly Linked List Menu -----\n");
        printf("1. Create a circular doubly linked list\n");
        printf("2. Display the elements of a circular doubly linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Delete a node from the beginning\n");
        printf("6. Delete a node from the end\n");
        printf("7. Delete a node after a given node\n");
        printf("8. Delete the entire circular doubly linked list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createCircularDoublyLinkedList();
                break;
            case 2:
                displayCircularDoublyLinkedList();
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
                printf("Enter the data after which to delete: ");
                scanf("%d", &data);
                deleteAfterNode(data);
                break;
            case 8:
                deleteEntireCircularDoublyLinkedList();
                break;
            case 9:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }
    return 0;
}