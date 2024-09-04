import java.util.Scanner;
class Week1Q6{
	static final double pi=3.14;
	void peri(double r){
		double perimeter=2*pi*r;
		System.out.println("The perimeter of the circle is: "+perimeter);
	}
	void area(double r){
		double area=pi*r*r;
		System.out.println("The perimeter of the circle is: "+area);	
	}
	public static void main(String args[]){
		Scanner cir=new Scanner(System.in);
		System.out.print("Enter the radius: ");
		float rad=cir.nextFloat();
		Week1Q6 myobj=new Week1Q6();
		myobj.peri(rad);
		myobj.area(rad);
		cir.close();
	}
}
