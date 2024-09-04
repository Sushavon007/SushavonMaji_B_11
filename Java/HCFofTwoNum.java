import java.util.Scanner;
public class HCFofTwoNum {
    public static void main(String[] args) {
        Scanner hc=new Scanner(System.in);
        int hcf=0;
        System.out.print("Enter the 1st number: ");
        int num1=hc.nextInt();
        System.out.print("Enter the 2nd number:");
        int num2=hc.nextInt();
        for(int i=1;i<=num1 || i<=num2;i++){
            if(num1%i==0 && num2%i==0){
                hcf=i;
            }
        }
        System.out.println("HCF is: "+hcf);
        hc.close();
    }
}