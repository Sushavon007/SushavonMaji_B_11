class Student {
    private String name;
    private int age;
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void displayDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
    }
}
public class Week5_Q18   {
    public static void main(String[] args) {
        Student student1 = new Student("Sudip", 20);
        System.out.println("Initial Details:");
        student1.displayDetails();
        student1.setName("Sudip Bakuli");
        student1.setAge(21);
        System.out.println("\nUpdated Details:");
        student1.displayDetails();
    }
}
