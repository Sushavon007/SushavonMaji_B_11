import java.util.Scanner;
class Stack {
    private int maxSize;
    private int[] stackArray;
    private int top;
    public Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }
    public void push(int value) {
        if (top < maxSize - 1) {
            stackArray[++top] = value;
            System.out.println(value + " pushed to stack");
        } else {
            System.out.println("Stack overflow");
        }    }
    public int pop() {
        if (top >= 0) {
            int value = stackArray[top--];
            System.out.println(value + " popped from stack");
            return value;
        } else {
            System.out.println("Stack underflow");
            return -1;
        }    }
    public int peek() {
        if (top >= 0) {
            return stackArray[top];
        } else {
            System.out.println("Stack is empty");
            return -1;
        }    }
    public boolean isEmpty() {
        return (top == -1);
    }
    public boolean isFull() {
        return (top == maxSize - 1);
    }
    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
            return;
        }
        System.out.println("Stack elements:");
        for (int i = top; i >= 0; i--) {
            System.out.println(stackArray[i]);
        }    }
}
public class Assignment3_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the stack: ");
        int size = sc.nextInt();
        Stack stack = new Stack(size);
        while (true) {
            System.out.println("\nStack Operations:");
            System.out.println("1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Peek");
            System.out.println("4. Display");
            System.out.println("5. Check if stack is empty");
            System.out.println("6. Check if stack is full");
            System.out.println("7. Exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter value to push: ");
                    int value = sc.nextInt();
                    stack.push(value);
                    break;
                case 2:
                    int poppedValue = stack.pop();
                    if (poppedValue != -1) {
                        System.out.println("Popped value: " + poppedValue);
                    }
                    break;
                case 3:
                    int peekValue = stack.peek();
                    if (peekValue != -1) {
                        System.out.println("Top element of stack: " + peekValue);
                    }
                    break;
                case 4:
                    stack.display();
                    break;
                case 5:
                    System.out.println("Is stack empty? " + stack.isEmpty());
                    break;
                case 6:
                    System.out.println("Is stack full? " + stack.isFull());
                    break;
                case 7:
                    System.out.println("Exiting...");
                    sc.close();
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}