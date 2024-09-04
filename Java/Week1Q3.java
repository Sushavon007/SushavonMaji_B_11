import java.util.Scanner;
class Week1Q3{
	public static void main(String args[]){
		Scanner ct=new Scanner(System.in);
		System.out.print("Enter the tempererature in celsius: ");
		int cel=ct.nextInt();
		float farenhite=((9*cel)/5)+32;
		System.out.println("tempererature in farenhite: "+farenhite);
		ct.close();
	}
}