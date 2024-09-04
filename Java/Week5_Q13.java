import java.util.Date;
class Account{
  private int id;
  private double balance;
  private double annualInterestRate;
  private Date dateCreated;
  Account(){
    id = 0;
    balance = 0;
    annualInterestRate = 0;
    dateCreated = new Date();
  }
  Account(int id, double balance){
    this.id = id;
    this.balance = balance;
    annualInterestRate = 0;
    dateCreated = new Date();
  }
  public int getId(){
    return id;
  }
  public void setId(int id){
    this.id = id;
  }
  public double getBalance(){
    return balance;
  }
  public void setBalance(double balance){
    this.balance = balance;
  }
  public double getAnnualInterestRate(){
    return annualInterestRate;
  }
  public void setAnnualInterestRate(double annualInterestRate){
    this.annualInterestRate = annualInterestRate;
  }
  public Date getDateCreated(){
    return dateCreated;
  }
  public double getMonthlyInterestRate(){
    return annualInterestRate/12;
  }
  public double getMonthlyInterest(){
    return balance * getMonthlyInterestRate();
  }
  public void withdraw(double amount){
    balance -= amount;
  }
  public void deposit(double amount){
    balance += amount;
  }
}
public class Week5_Q13  {
  public static void main(String[] args) {
    Account ac = new Account(1234, 15000);
    ac.setAnnualInterestRate(6.5);
    ac.withdraw(500);
    ac.deposit(3200);
    System.out.println("Balance: " + ac.getBalance());
    System.out.println("Monthly Interest: " + ac.getMonthlyInterest());
    System.out.println("Date Created: " + ac.getDateCreated());
  }
}
