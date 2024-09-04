#include <stdio.h>
void displayOddNumbersAndSum(int N) {
    if (N <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return;
    }
    int sum = 0;
    printf("First %d odd numbers:\n", N);
    for (int i = 1; N > 0; i += 2) {
        printf(" %d ", i);
        sum += i;
        N--;
    }
    printf("\nSum of the odd numbers = %d\n", sum);
}
int main() {
    int num;
    printf("Enter the number of odd terms to display: ");
    scanf("%d", &num);
    displayOddNumbersAndSum(num);
    return 0;
}