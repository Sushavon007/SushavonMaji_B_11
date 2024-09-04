import java.util.Scanner;
public class week8_32 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println("Enter the character : ");
        String ch = sc.next();
        int firstIndex = str.indexOf(ch);
        int lastIndex = str.lastIndexOf(ch);
        System.out.println("First index : " + firstIndex + ", " + "Last index : " + lastIndex);
        sc.close();
    }
}