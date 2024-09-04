import java.util.Scanner;
class Queue {
    private int maxSize;
    private int[] queueArray;
    private int front;
    private int rear;
    private int currentSize;
    public Queue(int size) {
        maxSize = size;
        queueArray = new int[maxSize];
        front = 0;
        rear = -1;
        currentSize = 0;
    }
    public void enqueue(int value) {
        if (!isFull()) {
            rear = (rear + 1) % maxSize;
            queueArray[rear] = value;
            currentSize++;
            System.out.println(value + " enqueued to queue");
        } else {
            System.out.println("Queue is full");
        }
    }
    public int dequeue() {
        if (!isEmpty()) {
            int dequeuedValue = queueArray[front];
            front = (front + 1) % maxSize;
            currentSize--;
            System.out.println(dequeuedValue + " dequeued from queue");
            return dequeuedValue;
        } else {
            System.out.println("Queue is empty");
            return -1;
        }    }
    public int peek() {
        if (!isEmpty()) {
            return queueArray[front];
        } else {
            System.out.println("Queue is empty");
            return -1;
        }
    }
    public boolean isEmpty() {
        return (currentSize == 0);
    }

    public boolean isFull() {
        return (currentSize == maxSize);
    }
    public void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return;
        }
        System.out.println("Queue elements:");
        int count = 0;
        int index = front;
        while (count < currentSize) {
            System.out.println(queueArray[index]);
            index = (index + 1) % maxSize;
            count++;
        }
    }
}
public class Assignment3_3 {
    public static void main(String[] args) {
        Scanner ap = new Scanner(System.in);
        System.out.print("Enter the size of the queue: ");
        int size = ap.nextInt();
        Queue queue = new Queue(size);
        while (true) {
            System.out.println("\nQueue Operations:");
            System.out.println("1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Peek");
            System.out.println("4. Display");
            System.out.println("5. Check if queue is empty");
            System.out.println("6. Check if queue is full");
            System.out.println("7. Exit");
            System.out.print("Enter your choice: ");
            int choice = ap.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter value to enqueue: ");
                    int value = ap.nextInt();
                    queue.enqueue(value);
                    break;
                case 2:
                    int dequeuedValue = queue.dequeue();
                    if (dequeuedValue != -1) {
                        System.out.println("Dequeued value: " + dequeuedValue);
                    }
                    break;
                case 3:
                    int peekValue = queue.peek();
                    if (peekValue != -1) {
                        System.out.println("Front element of queue: " + peekValue);
                    }
                    break;
                case 4:
                    queue.display();
                    break;
                case 5:
                    System.out.println("Is queue empty? " + queue.isEmpty());
                    break;
                case 6:
                    System.out.println("Is queue full? " + queue.isFull());
                    break;
                case 7:
                    System.out.println("Exiting...");
                    ap.close();
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}
