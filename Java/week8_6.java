import java.util.Scanner;
public class week8_6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int index = sc.nextInt();
        boolean charExists = checkChar(str, index);
        if (charExists) {
            System.out.println("The character at index " + index + " is '" + str.charAt(index) + "'");
        } else {
            System.out.println("Character does not exist at index " + index);
        }
        sc.close();
    }
    public static boolean checkChar(String str, int index) {
        if (index < 0 || index >= str.length()) return false;
        return true;
    }
}