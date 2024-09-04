import java.util.Scanner;
class Student {
    private String name;
    private int age;
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void display() {
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
    }
}
public class Assignment3_25 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter student's name: ");
        String name = scanner.nextLine();
        System.out.print("Enter student's age: ");
        int age = scanner.nextInt();
        Student student = new Student(name, age);
        System.out.println("\nStudent Information:");
        student.display();
        scanner.close();
    }
}
