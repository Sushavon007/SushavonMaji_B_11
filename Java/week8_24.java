import java.util.Scanner;
public class week8_24 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String word = sc.next();
        String newWord = sc.next();
        String newStr = str.replace(word, newWord);
        System.out.println(str);
        System.out.println(newStr);
        sc.close();
    }
}