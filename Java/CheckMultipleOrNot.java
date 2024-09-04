import java.util.Scanner;
public class CheckMultipleOrNot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of m: ");
        int m = scanner.nextInt();
        System.out.print("Enter the value of n: ");
        int n = scanner.nextInt();
        if (isMultiple(m, n)) {
            System.out.println(m + " is a multiple of " + n);
        } else {
            System.out.println(m + " is not a multiple of " + n);
        }
        scanner.close();
    }
    public static boolean isMultiple(int m, int n) {
        return m % n == 0;
    }
}
