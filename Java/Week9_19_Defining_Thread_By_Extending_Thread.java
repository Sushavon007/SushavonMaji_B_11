public class Week9_19_Defining_Thread_By_Extending_Thread extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }

    public static void main(String[] args) {
        Week9_19_Defining_Thread_By_Extending_Thread thread = new Week9_19_Defining_Thread_By_Extending_Thread();
        thread.start();
    }
}
