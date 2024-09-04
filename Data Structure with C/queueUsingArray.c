#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow. Cannot enqueue element.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("Element %d enqueued successfully.\n", value);
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow. Cannot dequeue element.\n");
        return;
    }
    printf("Element %d dequeued successfully.\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1; // Reset queue
    }
}
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. No front element to display.\n");
        return;
    }
    printf("Front element of the queue: %d\n", queue[front]);
}
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. No elements to display.\n");
        return;
    }
    printf("Elements in the queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main() {
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
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
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