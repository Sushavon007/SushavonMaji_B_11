import java.util.Scanner;
public class Armstrongnumber {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("Enter a number to check if it's an Armstrong number: ");
        int number = ar.nextInt();
        if (isArmstrong(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }
        ar.close();
    }
    public static boolean isArmstrong(int number) {
        int originalNumber, remainder, result = 0, n = 0;
        originalNumber = number;
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++n;
        }
        originalNumber = number;
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, n);
            originalNumber /= 10;
        }
        if (result == number) {
            return true;
        } else {
            return false;
        }
    }
}
