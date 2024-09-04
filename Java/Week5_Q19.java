public class Week5_Q19 {
    static int staticVariable = 10;
    static void staticMethod() {
        System.out.println("Inside static method. Static variable: " + staticVariable);
    }
    public static void main(String[] args) {
        System.out.println("Accessing static variable directly: " + staticVariable);
        staticMethod();
        Week5_Q19 obj1 = new Week5_Q19 ();
        Week5_Q19 obj2 = new Week5_Q19 ();
        obj1.staticVariable = 20;
        System.out.println("Accessing static variable through another instance: " + obj2.staticVariable);
    }
}
