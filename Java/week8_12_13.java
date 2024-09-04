import java.util.Scanner;
public class week8_12_13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        boolean areEqual = str1.equals(str2);
        System.out.println("Using equals(): " + str1 + " == " + str2 + " is " + areEqual);
        boolean areEqualIgnoreCase = str1.equalsIgnoreCase(str2);
        System.out.println("Using equalsIgnoreCase(): " + str1 + " == " + str2 + " is " + areEqualIgnoreCase);
        sc.close();
    }
}