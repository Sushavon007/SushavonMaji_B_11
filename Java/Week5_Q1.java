import java.lang.Math;
import java.util.Scanner;
class Point {
    private double x;
    private double y;
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public double getX() {
        return x;
    }
    public double getY() {
        return y;
    }
}
class Circle {
    private Point center;
    private double radius;
    public Circle(Point center, double radius) {
        this.center = center;
        this.radius = radius;
    }
    public double area() {
        return Math.PI * Math.pow(radius, 2);
    }
}
public class Week5_Q1 {
    public static void main(String[] args) {
        Scanner cir=new Scanner(System.in);
        System.out.print("Enter the circlr Coordinate(X,Y): ");
        int x=cir.nextInt();
        int y=cir.nextInt();
        System.out.print("Enter the radius: ");
        int r=cir.nextInt();
        Point centerCoordinates = new Point(x, y);
        Circle myCircle = new Circle(centerCoordinates, r);
        System.out.println("Area of the circle: " + myCircle.area());
        cir.close();
    }
}
