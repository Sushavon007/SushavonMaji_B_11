class Fraction {
    private int numerator;
    private int denominator;
      public Fraction() {
        numerator = 1;
        denominator = 1;
    }
    public Fraction(int numerator, int denominator) {
        this.numerator = numerator;
        this.denominator = denominator != 0 ? denominator : 1;
    }
    public Fraction(int numerator) {
        this.numerator = numerator;
        this.denominator = 1;
    }
    public void displayFraction() {
        System.out.println(numerator + "/" + denominator);
    }
}
public class Week5_Q7 {
    public static void main(String[] args) {
        Fraction fraction1 = new Fraction();
        Fraction fraction2 = new Fraction(6, 4);
        Fraction fraction3 = new Fraction(7);
      
        System.out.print("Fraction 1: ");
        fraction1.displayFraction();

        System.out.print("Fraction 2: ");
        fraction2.displayFraction();

        System.out.print("Fraction 3: ");
        fraction3.displayFraction();
    }
}
