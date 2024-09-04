import java.util.Scanner;
public class Week5_Q12  {
  String printNumberInWord(int num){
    if (num == 1){
      return "ONE";
    } else if (num == 2){
      return "TWO";
    } else if (num == 3){
      return "THREE";
    } else if (num == 4){
      return "FOUR";
    } else if (num == 5){
      return "FIVE";
    } else if (num == 6){
      return "SIX";
    } else if (num == 7){
      return "SEVEN";
    } else if (num == 8){
      return "EIGHT";
    } else if (num == 9){
      return "NINE";
    } else if (num == 0){
      return "ZERO";
    } else {
      return "OTHER";
    }
  }
  public static void main(String[] args) {
    Week5_Q12 obj = new Week5_Q12();
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number(0 to 9): ");
    int num = sc.nextInt();
    System.out.println(obj.printNumberInWord(num));
  }
}
