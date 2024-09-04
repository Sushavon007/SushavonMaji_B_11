#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
void createDoublyLinkedList() {
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
    head->prev = NULL;
    head->next = NULL;
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
        newNode->prev = temp;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
    printf("Doubly linked list created successfully.\n");
}
void displayDoublyLinkedList() {
    struct Node *temp;
    if (head == NULL) {
        printf("Doubly linked list is empty.\n");
        return;
    }
    temp = head;
    printf("Doubly linked list elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void insertAtBeginning(int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    printf("Node inserted at the beginning successfully.\n");
}
void insertAtEnd(int value) {
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        printf("Node inserted at the end successfully.\n");
        return;
    }
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    printf("Node inserted at the end successfully.\n");
}
void insertBeforeNode(int value, int beforeValue) {
    struct Node *newNode, *temp;
    if (head == NULL) {
        printf("Doubly linked list is empty. Cannot insert before a node.\n");
        return;
    }
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp = head;
    while (temp != NULL && temp->data != beforeValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with given data not found.\n");
        return;
    }
    newNode->data = value;
    newNode->prev = temp->prev;
    newNode->next = temp;
    if (temp->prev != NULL) {
        temp->prev->next = newNode;
    } else {
        head = newNode;
    }
    temp->prev = newNode;
    printf("Node inserted before %d successfully.\n", beforeValue);
}
void insertAfterNode(int value, int afterValue) {
    struct Node *newNode, *temp;
    if (head == NULL) {
        printf("Doubly linked list is empty. Cannot insert after a node.\n");
        return;
    }
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp = head;
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with given data not found.\n");
        return;
    }
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    printf("Node inserted after %d successfully.\n", afterValue);
}
void deleteFromBeginning() {
    struct Node *temp;
    if (head == NULL) {
        printf("Doubly linked list is empty. Cannot delete from beginning.\n");
        return;
    }
    temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    printf("Node deleted from the beginning successfully.\n");
}
void deleteFromEnd() {
    struct Node *temp;
    if (head == NULL) {
        printf("Doubly linked list is empty. Cannot delete from end.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Node deleted from the end successfully.\n");
        return;
    }
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    printf("Node deleted from the end successfully.\n");
}
void deleteAfterNode(int afterValue) {
    struct Node *temp, *toDelete;
    if (head == NULL) {
        printf("Doubly linked list is empty. Cannot delete after a node.\n");
        return;
    }
    temp = head;
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Node with given data not found or there is no node after it.\n");
        return;
    }
    toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL) {
        toDelete->next->prev = temp;
    }
    free(toDelete);
    printf("Node deleted after %d successfully.\n", afterValue);
}
void deleteEntireDoublyLinkedList() {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Entire doubly linked list deleted successfully.\n");
}
int main() {
    int choice, data, beforeData, afterData;
    while (1) {
        printf("\n----- Doubly Linked List Menu -----\n");
        printf("1. Create a doubly linked list\n");
        printf("2. Display the elements of a doubly linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node before a given node\n");
        printf("6. Insert a node after a given node\n");
        printf("7. Delete a node from the beginning\n");
        printf("8. Delete a node from the end\n");
        printf("9. Delete a node after a given node\n");
        printf("10. Delete the entire doubly linked list\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                createDoublyLinkedList();
                break;
            case 2:
                displayDoublyLinkedList();
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
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter the data before which to insert: ");
                scanf("%d", &beforeData);
                insertBeforeNode(data, beforeData);
                break;
            case 6:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter the data after which to insert: ");
                scanf("%d", &afterData);
                insertAfterNode(data, afterData);
                break;
            case 7:
                deleteFromBeginning();
                break;
            case 8:
                deleteFromEnd();
                break;
            case 9:
                printf("Enter the data after which to delete: ");
                scanf("%d", &afterData);
                deleteAfterNode(afterData);
                break;
            case 10:
                deleteEntireDoublyLinkedList();
                break;
            case 11:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }
    return 0;
}