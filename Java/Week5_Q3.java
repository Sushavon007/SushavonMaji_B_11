class Complex{
    private int real, imaginary;
  
    Complex(int real, int imaginary){
      this.real = real;
      this.imaginary = imaginary;
    }	
    void add(Complex otherNum){
      int newReal = this.real + otherNum.real;
      int newImaginary = this.imaginary + otherNum.imaginary;
  
      System.out.println("Sum: " + newReal + " + i" + newImaginary);
    }
  }
  public class Week5_Q3 {
    public static void main(String[] args) {
      Complex num1 = new Complex(53, 75);
      Complex num2 = new Complex(78, 8);
      num1.add(num2);
    }
  }
  