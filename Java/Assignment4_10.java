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
class HexNum extends Num {
    public HexNum(int number) {
        super(number);
    }
    public void showNum() {
        System.out.println("Hexadecimal Value: " + Integer.toHexString(number));
    }
}
public class Assignment4_10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        HexNum hexNum = new HexNum(number);
        scanner.close();
        hexNum.showNum();
    }
}

