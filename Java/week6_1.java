import java.lang.Math;
abstract class Shape{
    abstract double getArea();
    abstract double getPerimeter();
}
class Rectangle extends Shape{
    private double length, width;
    Rectangle(double l, double w){
        this.length = l;
        this.width=w;
    }
    @Override
    double getArea(){
        return length * width;
    }
    @Override
    double getPerimeter(){
        return 2*(length + width);
    }
}
class Triangle extends Shape{
    private double side1, side2, side3;
    Triangle(double a, double b, double c){
        this.side1 = a;
        this.side2 = b;
        this.side3 = c;
    }
    @Override
    double getArea(){
        double s = (side1+side2+side3)/2;
        return Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    @Override
    double getPerimeter(){
        return  side1 + side2 + side3;
    }
}
public class week6_1 {
    public static void main(String[] args) {
        double rl=4, rw=5;
        Rectangle r = new Rectangle(rl,rw);
        double ts1=5, ts2=3, ts3=4;
        Triangle t = new Triangle(ts1, ts2, ts3);
        System.out.println("Area of Rectangle: "+r.getArea());
        System.out.println("Perimeter of Rectangle: "+r.getPerimeter());
        System.out.println("");
        System.out.println("Area of Triangle: "+t.getArea());
        System.out.println("Perimeter of Triangle: "+t.getPerimeter());
    }
}