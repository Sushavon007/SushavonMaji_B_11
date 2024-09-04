import java.util.Scanner;
class Commission {
    private double sales;
    public Commission(double sales) {
        this.sales = sales;
    }
    public double commission() {
        if (sales < 0) {
            return -1; 
        } else if (sales <= 1000) {
            return 0.05 * sales; 
        } else {
            return 0.08 * sales; 
        }
    }
}
public class Assignment3_28 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the sales amount: ");
        double sales = scanner.nextDouble();
        if (sales < 0) {
            System.out.println("Invalid Input");
        } else {
            Commission commissionObj = new Commission(sales);
            double commission = commissionObj.commission();
            if (commission == -1) {
                System.out.println("Invalid Input");
            } else {
                System.out.println("The commission is: " + commission);
            }
        }
        scanner.close();
    }
}
