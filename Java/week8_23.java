import java.util.Scanner;
public class week8_23 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String word = sc.next();
        int index = str.indexOf(word);
        if (index != -1)
            System.out.println("Found at: " + index);
        else 
            System.out.println("Not found");
        sc.close();
    }
}