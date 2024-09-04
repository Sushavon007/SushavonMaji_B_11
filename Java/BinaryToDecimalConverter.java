import java.util.Scanner;
public class BinaryToDecimalConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("Choose an option:");
            System.out.println("1. Convert Binary to Decimal");
            System.out.println("2. Convert Decimal to Binary");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter a binary number: ");
                    String binaryInput = scanner.next();
                    System.out.println("Decimal: " + binaryToDecimal(binaryInput));
                    break;
                case 2:
                    System.out.print("Enter a decimal number: ");
                    int decimalInput = scanner.nextInt();
                    System.out.println("Binary: " + decimalToBinary(decimalInput));
                    break;
                case 3:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 3);
        scanner.close();
    }
    public static int binaryToDecimal(String binary) {
        int decimal = 0;
        int length = binary.length();
        for (int i = 0; i < length; i++) {
            if (binary.charAt(i) == '1') {
                decimal += Math.pow(2, length - 1 - i);
            }
        }
        return decimal;
    }
    public static String decimalToBinary(int decimal) {
        if (decimal == 0) {
            return "0";
        }
        StringBuilder binary = new StringBuilder();
        while (decimal > 0) {
            int remainder = decimal % 2;
            binary.insert(0, remainder);
            decimal = decimal / 2;
        }
        return binary.toString();
    }
}