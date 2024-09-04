import java.util.Arrays;
import java.util.Scanner;
public class MedianOfSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        System.out.print("Enter the elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        double median = findMedian(nums);
        System.out.println("The median is: " + median);
        sc.close();
    }
    public static double findMedian(int[] nums) {
        Arrays.sort(nums); 
        int n = nums.length;
        if (n % 2 != 0) {
            return nums[n / 2];
        } else { 
            int mid1 = nums[n / 2 - 1];
            int mid2 = nums[n / 2];
            return (double) (mid1 + mid2) / 2;
        }
    }
}
