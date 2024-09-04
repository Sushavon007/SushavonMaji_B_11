import java.util.Scanner;
import java.lang.Math;
public class ExponentialOfNumber {
    public static void main(String[] args) {
        Scanner ex=new Scanner(System.in);
        System.out.print("Enter the number: ");
        double num=ex.nextInt();
        System.out.print("Enter the exponent:");
        double expo=ex.nextInt();
        double result=Math.pow(num, expo);
        System.out.println("Result is: "+result);
        ex.close();
    }
}
