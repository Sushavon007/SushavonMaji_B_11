import java.util.Scanner;
class Distance {
    protected double distance;
    public Distance(double distance) {
        this.distance = distance;
    }
    public void travelTime() {
        double time = distance / 60.0;
        System.out.println("Time taken to cover the distance at 60 mph: " + time + " hours");
    }
}
class DistanceMKS extends Distance {
    public DistanceMKS(double distance) {
        super(distance);
    }
    public void travelTime() {
        double time = distance / 100.0;
        System.out.println("Time taken to cover the distance at 100 km/s: " + time + " seconds");
    }
}
public class Assignment4_13 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter distance in miles: ");
        double distanceMiles = scanner.nextDouble();
        Distance distance = new Distance(distanceMiles);
        distance.travelTime();
        System.out.print("Enter distance in kilometers: ");
        double distanceKilometers = scanner.nextDouble();
        DistanceMKS distanceMKS = new DistanceMKS(distanceKilometers);
        distanceMKS.travelTime();
        scanner.close();
    }
}
