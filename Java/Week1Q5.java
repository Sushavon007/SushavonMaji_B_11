import java.util.Scanner;
class Week1Q5{
	void area(int len,int bre){
		int area=(len*bre);
		System.out.println("The area is: "+area);
	}
	void perimeter(int len,int bre){
		int peri=2*(len+bre);
		System.out.println("The perimeter is: "+peri);
	}
	public static void main(String args[]){
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the length: ");
		int length=s.nextInt();
		System.out.print("Enter the breadth: ");
		int breadth=s.nextInt();
		Week1Q5 obj=new Week1Q5();
		obj.area(length,breadth);
		obj.perimeter(length,breadth);
	}
}
