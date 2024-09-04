import java.util.Scanner;
class Rectangle {
    private int length;
    private int width;
    public Rectangle() {
        length = 0;
        width = 0;
    }
    public Rectangle(int side) {
        length = side;
        width = side;
    }
    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }
    public int calculateArea() {
        return length * width;
    }
}
public class Assignment3_26 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. Create a square (same length and width)");
        System.out.println("2. Create a rectangle (different length and width)");
        System.out.print("Enter your choice: ");
        int choice = scanner.nextInt();
        Rectangle rect;
        if (choice == 1) {
            System.out.print("Enter the side length of the square: ");
            int side = scanner.nextInt();
            rect = new Rectangle(side);
        } else if (choice == 2) {
            System.out.print("Enter the length of the rectangle: ");
            int length = scanner.nextInt();
            System.out.print("Enter the width of the rectangle: ");
            int width = scanner.nextInt();
            rect = new Rectangle(length, width);
        } else {
            System.out.println("Invalid choice. Exiting...");
            scanner.close();
            return;
        }
        System.out.println("Area of the shape: " + rect.calculateArea());
        scanner.close();
    }
}
