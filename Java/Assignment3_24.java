class MyClass {
    public MyClass() {
        System.out.println("This is the 0-arguments constructor.");
    }
    public void display() {
        System.out.println("Inside the display method.");
    }
}
public class Assignment3_24 {
public static void main(String[] args) {
    MyClass obj = new MyClass();
    obj.display();
}
}
