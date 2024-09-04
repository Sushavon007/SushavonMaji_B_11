public class Week9_24_Illustrate_Thread_Example_for_Destroy {
    public static void main(String[] args) {
        Thread thread = new Thread(new MyRunnable());
        thread.start();
        thread.destroy();
    }
    static class MyRunnable implements Runnable {
        public void run() {
            System.out.println("Thread is running...");
        }
    }
}