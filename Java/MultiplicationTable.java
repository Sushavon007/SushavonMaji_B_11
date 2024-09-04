import java.util.Scanner;
public class MultiplicationTable{
    public static void main(String[] args) {
        Scanner ml=new Scanner(System.in);
        int num;
        System.out.print("Enter the number: ");
        num=ml.nextInt();
        for(int i=1;i<=num;i++){
            System.out.println(num+"*"+i+"="+num*i);
        }
        ml.close();
    }
}