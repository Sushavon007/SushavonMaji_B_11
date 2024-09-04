import java.math.*;
class Circle{
  private double radius;
  private String color;
  Circle(){
    radius = 1.0;
    color = "red";
  }
  Circle(double r){
    radius = r;
    color = "red";
  }
  public double getRadius(){
    return radius;
  }
  public double getArea(){
    return Math.PI * radius * radius;
  }
}
public class Week5_Q11  {
  public static void main(String[] args) {
    Circle cir = new Circle(7.3);
    System.out.println("Radius: " + cir.getRadius());
    System.out.println("Area: " + cir.getArea());
  }
}
