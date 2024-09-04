class Methods{
    float commission(float amount, float rate){
      return amount * rate;
    }
    int squareRoot(int num){
      return num * num;
    }
    boolean checkEven(int num){
      if(num % 2 == 0)
        return true;
      else
        return false;
    }
    void display(int n, String msg){
      for(int i=0; i<n; i++){
        System.out.println(msg);
      }
    }
    float emi(float p, float r, float t){
      float total = p+(p*r*t);
      return total/(t*12);
    }
  }
  public class Week5_Q15  {
    public static void main(String[] args) {
      Methods obj = new Methods();
      System.out.println("Commission: " + obj.commission(25000, 0.07f));
      System.out.println("Square Root: " + obj.squareRoot(5));
      System.out.println(obj.checkEven(65) ? "Number is even" : "Number is odd");
      obj.display(5, "Hi");
      System.out.println("EMI: " + obj.emi(14000, 0.05f, 4));
    }
  }
  