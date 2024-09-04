#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Queue {
    struct Node *front, *rear;
};
struct Queue *createQueue() {
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(struct Queue *q, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Cannot enqueue element.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
    printf("Element %d enqueued successfully.\n", value);
}
void dequeue(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return;
    }
    struct Node *temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    printf("Element %d dequeued successfully.\n", temp->data);
    free(temp);
}
void peek(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty. No front element to display.\n");
        return;
    }
    printf("Front element of the queue: %d\n", q->front->data);
}
void display(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty. No elements to display.\n");
        return;
    }
    struct Node *temp = q->front;
    printf("Elements in the queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    struct Queue *queue = createQueue();
    int choice, value;
    while (1) {
        printf("\n----- Queue Menu -----\n");
        printf("1. Enqueue (Insert) element into the queue\n");
        printf("2. Dequeue (Delete) element from the queue\n");
        printf("3. Peek (Get front element of the queue)\n");
        printf("4. Display elements of the queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &value);
                enqueue(queue, value);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                peek(queue);
                break;
            case 4:
                display(queue);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }
    return 0;
}