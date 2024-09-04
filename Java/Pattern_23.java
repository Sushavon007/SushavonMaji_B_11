import java.util.Scanner;
public class Pattern_23 {
	public static void printPattern(int n)
	{
		int i, j;
		int num = 1;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= i+i-1; j++) {
				System.out.print(num + " ");
				num++;
			}
			System.out.println();
		}
	}
	public static void main(String args[])
	{
		int n;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number: ");
        n=sc.nextInt();
		printPattern(n);
        sc.close();
	}
}
