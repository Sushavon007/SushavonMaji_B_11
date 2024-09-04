import java.util.Scanner;
public class Assignment3_10 {
    public static void main(String[] args) {
        Scanner sm = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sm.nextInt();
        int[] array = new int[size];
        System.out.println("Enter elements of the array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            array[i] = sm.nextInt();
        }
        int smallest = findSmallestNumber(array);
        System.out.println("The smallest number in the array is: " + smallest);
        sm.close();
    }
    public static int findSmallestNumber(int[] array) {
        if (array.length == 0) {
            return Integer.MIN_VALUE; 
        }
        int smallest = array[0]; 
        for (int i = 1; i < array.length; i++) {
            if (array[i] < smallest) {
                smallest = array[i];
            }
        }
        return smallest;
    }
}
