import java.util.Scanner;
class Week1Q2{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter 1st number: ");
		int a=sc.nextInt();
		System.out.print("Enter 2nd Nnumber: ");
		int b=sc.nextInt();
		int c=a+b;
		System.out.println("The answer is: "+c);
		sc.close();
	}
}
