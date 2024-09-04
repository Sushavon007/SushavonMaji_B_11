import java.util.Scanner;
public class EulerNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n to compute the value of Euler's number (e): ");
        int n = scanner.nextInt();
        double eulerNumber = computeEulerNumber(n);
        System.out.println("The value of Euler's number (e) is approximately: " + eulerNumber);
        scanner.close();
    }
    public static double computeEulerNumber(int n) {
        double eulerNumber = 1.0; // Initialize with the first term (1/0!)
        double factorial = 1.0; // Initialize factorial to 0!
        for (int i = 1; i <= n; i++) {
            factorial *= i;
            eulerNumber += 1.0 / factorial; 
        }
        return eulerNumber;
    }
}
