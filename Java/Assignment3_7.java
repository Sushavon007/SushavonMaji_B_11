import java.util.Scanner;
public class Assignment3_7 {
    public static void main(String[] args) {
        Scanner as = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = as.nextInt();
        int[] array = new int[size];
        System.out.println("Enter elements of the array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            array[i] = as.nextInt();
        }
        int sum = sumOfEvenNumbers(array);
        System.out.println("Sum of even numbers in the array: " + sum);
        as.close();
    }
    public static int sumOfEvenNumbers(int[] array) {
        int sum = 0;
        for (int num : array) {
            if (num % 2 == 0) {
                sum += num;
            }
        }
        return sum;
    }
}
