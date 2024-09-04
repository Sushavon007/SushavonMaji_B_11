import java.util.Scanner;
class Week1Q9{
	public static void main(String args[]){
		Scanner sp=new Scanner(System.in);
		System.out.print("Enter the 1st number: ");
		int a=sp.nextInt();
		System.out.print("Enter the 2nd number: ");
		int b=sp.nextInt();
		System.out.print("Enter the 3rd number: ");
		int c=sp.nextInt();
		
		if(a>b && a>c){
			System.out.println(a+" is a max number");
		}
		else if(b>a && b>c){
			System.out.println(b+" is a max number");
		}
		else{
			System.out.println(c+" is a max number");
		}
	}
}
