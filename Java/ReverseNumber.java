import java.util.Scanner;
public class ReverseNumber {
    public static void main(String[] args) {
        int rev=0;
        Scanner re=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num=re.nextInt();
        while(num!=0){
            int reminder=num%10;
            rev=rev*10+reminder;
            num=num/10;
        }
        System.out.println("Ther reverse number is: "+rev);
    }
}
