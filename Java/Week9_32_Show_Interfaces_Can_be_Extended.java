interface MyInterface {
    void display();
}

interface MyExtendedInterface extends MyInterface {
    void show();
}

public class Week9_32_Show_Interfaces_Can_be_Extended implements MyExtendedInterface {
    public void display() {
        System.out.println("Display method implementation");
    }

    public void show() {
        System.out.println("Show method implementation");
    }

    public static void main(String[] args) {
        Week9_32_Show_Interfaces_Can_be_Extended example = new Week9_32_Show_Interfaces_Can_be_Extended();
        example.display();
        example.show();
    }
}
