import java.util.Scanner;
class StringMismatchException extends Exception {
    public StringMismatchException(String message) {
        super(message);
    }
}
public class week7_23 {
    public static void compareStrings(String str1, String str2) throws StringMismatchException {
        if (!str1.equalsIgnoreCase(str2)) {
            throw new StringMismatchException("The strings do not match.");
        } else {
            System.out.println("The strings match.");
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first string:");
        String string1 = scanner.nextLine();
        System.out.print("Enter the second string:");
        String string2 = scanner.nextLine();
        try {
            compareStrings(string1, string2);
        } catch (StringMismatchException e) {
            System.out.println("Caught Exception: " + e.getMessage());
        }
        scanner.close();
    }
}