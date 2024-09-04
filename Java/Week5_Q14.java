import java.util.Scanner;
import java.lang.Math;
public class Week5_Q14  {
  void displayReturns(float amount, float rate){
    System.out.println("Years\t\tAmount");
    System.out.println("---------------------");
    for(int i=1; i<=30; i++){  
      float total = (float)(amount * Math.pow((1+rate/100), i));
      System.out.println(" "+i+"\t\t\t"+total);
    }
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter your Investment amount: ");
    float amount = sc.nextFloat();
    System.out.print("Enter your Annual Interest Rate: ");
    float rate = sc.nextFloat();
    Week5_Q14 obj = new Week5_Q14();
    obj.displayReturns(amount, rate);
  }
}
