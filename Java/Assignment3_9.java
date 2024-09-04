import java.util.Scanner;
public class Assignment3_9 {
    public static void main(String[] args) {
        Scanner re = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = re.nextInt();
        int[] array = new int[size];
        System.out.println("Enter elements of the array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            array[i] = re.nextInt();
        }
        reverseArray(array);
        System.out.println("Reversed array:");
        for (int num : array) {
            System.out.print(num + " ");
        }
        re.close();
    }
    public static void reverseArray(int[] array) {
        int start = 0;
        int end = array.length - 1;
        while (start < end) {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
                        start++;
            end--;
        }
    }
}
