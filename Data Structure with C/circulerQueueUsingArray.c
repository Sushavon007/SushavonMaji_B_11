#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int circularQueue[MAX_SIZE];
int front = -1, rear = -1;
int isFull() {
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1)) {
        return 1;
    }
    return 0;
}
int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return 0;
}
void enqueue(int value) {
    if (isFull()) {
        printf("Circular queue overflow. Cannot enqueue element.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    circularQueue[rear] = value;
    printf("Element %d enqueued successfully.\n", value);
}
void dequeue() {
    if (isEmpty()) {
        printf("Circular queue underflow. Cannot dequeue element.\n");
        return;
    }
    printf("Element %d dequeued successfully.\n", circularQueue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}
void peek() {
    if (isEmpty()) {
        printf("Circular queue is empty. No front element to display.\n");
        return;
    }
    printf("Front element of the circular queue: %d\n", circularQueue[front]);
}
void display() {
    int i;
    if (isEmpty()) {
        printf("Circular queue is empty. No elements to display.\n");
        return;
    }
    printf("Elements in the circular queue: ");

    if (rear >= front) {
        for (i = front; i <= rear; i++) {
            printf("%d ", circularQueue[i]);
        }
    } else {
        for (i = front; i < MAX_SIZE; i++) {
            printf("%d ", circularQueue[i]);
        }
        for (i = 0; i <= rear; i++) {
            printf("%d ", circularQueue[i]);
        }
    }
    printf("\n");
}
int main() {
    int choice, value;
    while (1) {
        printf("\n----- Circular Queue Menu -----\n");
        printf("1. Insert an element into the circular queue\n");
        printf("2. Delete an element from the circular queue\n");
        printf("3. Return the value of the FRONT element of the circular queue\n");
        printf("4. Display the elements of a circular queue\n");
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