import java.util.Scanner;
class Num {
    protected int number;
    public Num(int number) {
        this.number = number;
    }
    public void showNum() {
        System.out.println("Number: " + number);
    }
}
class OctNum extends Num {
    public OctNum(int number) {
        super(number);
    }
    public void showNum() {
        System.out.println("Octal Value: " + Integer.toOctalString(number));
    }
}
public class Assignment4_11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        OctNum octNum = new OctNum(number);
        scanner.close();
        octNum.showNum();
    }
}
