public class Assignment4_2 {
    public static int add(int a, int b) {
      return a + b;
  }
  public static int add(int a, int b, int c) {
      return a + b + c;
  }
  public static double add(double a, double b) {
      return a + b;
  }
  public static void main(String[] args) {
      int sum1 = add(2, 8);
      int sum2 = add(5, 7, 8);
      double sum3 = add(3.7, 2.9);
      System.out.println("Sum of two integers: " + sum1);
      System.out.println("Sum of three integers: " + sum2);
      System.out.println("Sum of two doubles: " + sum3);
  }
}
