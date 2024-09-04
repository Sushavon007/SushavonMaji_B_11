import java.util.Scanner;
class Week1Q10{
	public static void main(String args[]){
		Scanner sw=new Scanner(System.in);
		System.out.print("Enter the 1st number: ");
		int n1=sw.nextInt();
		System.out.print("Enter the 2nd number: ");
		int n2=sw.nextInt();
		int temp=n1;
		n1=n2;
		n2=temp;
		System.out.println("After Swapping...");
		System.out.println("1st number: "+n1);
		System.out.println("2nd number: "+n2);

	}
}
