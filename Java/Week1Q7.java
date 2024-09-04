import java.util.Scanner;
class Week1Q7{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number: ");
		int num=sc.nextInt();
		if(num%2==0){
			System.out.println(num+" is a even number");
		}
		else if(num%2!=0){
			System.out.println(num+" is a odd number");
		}
		else{
			System.out.println("Your entered number is Zero");
		}
		sc.close();
	}
}
