class Time{
    private int hour, min, sec;
      Time(int hour, int min, int sec){
      this.hour = hour;
      this.min = min;
      this.sec = sec;
    }	
    void add(Time otherTime){
      int newHour = this.hour + otherTime.hour;
      int newMin = this.min + otherTime.min;
      int newSec = this.sec + otherTime.sec;
      if(newSec >= 60){
        newSec %= 60;
        newMin++;
      }
      if(newMin >= 60){
        newMin %= 60;
        newHour++;
      }
      System.out.println("New Time: " + newHour + ":" + newMin + ":" + newSec);
    }
  }
  public class Week5_Q2  {
    public static void main(String[] args) {
      Time time1 = new Time(7, 5, 34);
      Time time2 = new Time(3, 49, 8);
      time1.add(time2);
    }
  }
  