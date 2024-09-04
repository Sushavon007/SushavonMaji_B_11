import java.util.Scanner;

class Student{
  String name;
  int roll;
  double sub1,sub2;

  Student(String name,int roll,double sub1,double sub2){
    this.name = name;
    this.roll = roll;
    this.sub1 = sub1;
    this.sub2 = sub2;
  }
  double percentage(){
    return (sub1+sub2)/2;
  }
  void display(){
    System.out.println("Name: "+name);
    System.out.println("Roll: "+roll);
    System.out.println("Total marks: "+(sub1+sub2));
    System.out.println("Percentage: "+percentage());
  }
}
public class Week5_Q5 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter your name: ");
    String name = sc.nextLine();
    System.out.print("Enter your roll no: ");
    int roll = sc.nextInt();
    System.out.print("Enter your marks in sub1(out of 100): ");
    double sub1 = sc.nextDouble();
    System.out.print("Enter your marks in sub2(out of 100): ");
    double sub2 = sc.nextDouble();
    Student s = new Student(name,roll,sub1,sub2);
    s.display();
  }
}