import java.util.Scanner;

public class week8_8 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string and length");
        String str = sc.nextLine();
        int length = sc.nextInt();

        findSubsets(str, length);
        sc.close();
    }

    public static void findSubsets(String str, int length) {

        for (int i = 0; i < str.length(); i++) {
            findSubsetsHelper(str, i, length, new StringBuilder());
        }
    }

    private static void findSubsetsHelper(String str, int startIndex, int length, StringBuilder currentSubset) {
        if (currentSubset.length() == length) {
            System.out.println(currentSubset);
            return;
        }

        for (int i = startIndex; i < str.length(); i++) {
            currentSubset.append(str.charAt(i));
            findSubsetsHelper(str, i + 1, length, currentSubset);
            currentSubset.deleteCharAt(currentSubset.length() - 1); // Backtrack
        }
    }
}
