public class Week9_25_Illustrate_Thread_Example_for_suspend {
    public static void main(String[] args) {
        Thread thread = new Thread(new MyRunnable());
        thread.start();
        try {
            Thread.sleep(2000);
            thread.suspend();
            System.out.println("Thread suspended...");
            Thread.sleep(2000);
            thread.resume();
            System.out.println("Thread resumed...");
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    static class MyRunnable implements Runnable {
        public void run() {
            while (true) {
                System.out.println("Thread is running...");
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
