#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    return (result == num);
}
void printArmstrongNumbers(int limit) {
    printf("Armstrong numbers between 1 and %d are:\n", limit);
    for (int i = 1; i <= limit; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}
int main() {
    int n;
    printf("Enter the limit (n) to find Armstrong numbers up to n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer greater than zero.\n");
        return 1;
    }
    printArmstrongNumbers(n);
    return 0;
}