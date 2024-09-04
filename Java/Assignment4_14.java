class Vehicle {
    protected int numWheels;
    protected int speed;
    public Vehicle(int numWheels, int speed) {
        this.numWheels = numWheels;
        this.speed = speed;
    }
}
class Car extends Vehicle {
    private int numPassengers;
    public Car(int numWheels, int speed, int numPassengers) {
        super(numWheels, speed);
        this.numPassengers = numPassengers;
    }
    public void display() {
        System.out.println("Car Information:");
        System.out.println("Number of Wheels: " + numWheels);
        System.out.println("Speed: " + speed + " mph");
        System.out.println("Number of Passengers: " + numPassengers);
    }
}
class Truck extends Vehicle {
    private int loadLimit;
    public Truck(int numWheels, int speed, int loadLimit) {
        super(numWheels, speed);
        this.loadLimit = loadLimit;
    }
    public void display() {
        System.out.println("Truck Information:");
        System.out.println("Number of Wheels: " + numWheels);
        System.out.println("Speed: " + speed + " mph");
        System.out.println("Load Limit: " + loadLimit + " tons");
    }
}
public class Assignment4_14 {
    public static void main(String[] args) {
        Car car = new Car(4, 110, 5);
        Truck truck = new Truck(8, 75, 12);
        car.display();
        truck.display();
        if (car.speed > truck.speed) {
            System.out.println("Car is faster than Truck.");
        } else if (car.speed < truck.speed) {
            System.out.println("Truck is faster than Car.");
        } else {
            System.out.println("Car and Truck have the same speed.");
        }
    }
}
