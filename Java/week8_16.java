import java.util.Scanner;
public class week8_16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String str = sc.nextLine();
        System.out.println("Enter an old and new char to change : ");
        String old = sc.next();
        String neww = sc.next();
        String replacedString = str.replace(old, neww);
        System.out.println("Original String: " + str);
        System.out.println("Replaced String: " + replacedString);
        sc.close();
    }
}