public class Week9_12_Thread_that_Implement_the_Runnable_Interface implements Runnable {
    public void run() {
        System.out.println("Thread is running...");
    }
    public static void main(String[] args) {
        Week9_12_Thread_that_Implement_the_Runnable_Interface myRunnable = new Week9_12_Thread_that_Implement_the_Runnable_Interface();
        Thread thread = new Thread(myRunnable);
        thread.start();
    }
}