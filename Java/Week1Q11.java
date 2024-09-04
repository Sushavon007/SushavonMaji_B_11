import java.util.Scanner;
public class Week1Q11 {
    public static void main(String[] args) {
        Scanner mc=new Scanner(System.in);
        System.out.print("Enter value(miles): ");
        double miles=mc.nextInt();
        double km= miles*1.6;
        System.out.println("In kilometers it will be: "+km);
        mc.close();   
    }
}