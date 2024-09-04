import java.util.Scanner;
public class SumOfNaturalNnum {
    public static void main(String[] args) {
        Scanner su=new Scanner(System.in);
        int sum=0;
        System.out.print("Enter the range: ");
        int range=su.nextInt();
        for(int i=1;i<=range;i++){
            sum=sum+i;
        }
        System.out.println("Sum of all natural number upto "+range+" is: "+sum);
        su.close();
    }
}