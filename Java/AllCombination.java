public class AllCombination {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3};
        System.out.println("All combinations of 1, 2, or 3:");
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < numbers.length; j++) {
                for (int k = 0; k < numbers.length; k++) {
                    System.out.print(numbers[i] + " ");
                    System.out.print(numbers[j] + " ");
                    System.out.println(numbers[k]);
                }
            }
        }
    }
}
