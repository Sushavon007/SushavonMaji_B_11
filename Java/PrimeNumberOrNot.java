import java.util.Scanner;
public class PrimeNumberOrNot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number to check if it's prime: ");
        int number = scanner.nextInt();
        if (isPrime(number)) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
        scanner.close();
    }
        public static boolean isPrime(int number) {
        for(int i=2; i<(number/2); i++){
            if(number%i==0){
                return false;
            }
        }
        return true;
    }
}
