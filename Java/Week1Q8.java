import java.util.Scanner;
class Week1Q8{
	public static void main(String args[]){
		Scanner pos=new Scanner(System.in);
		System.out.print("Enter the number: ");
		int num=pos.nextInt();
		if(num<0){
			System.out.println("It is a negative number: ");
		}
		else if(num>0){
			System.out.println("It is a positive number: ");
		}
		else{
			System.out.println("It is zero");
		}
	}
}
