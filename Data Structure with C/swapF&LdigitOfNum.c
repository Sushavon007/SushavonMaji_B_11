#include <stdio.h>
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}
int swapFirstLastDigits(int num) {
    int digits = countDigits(num);

    if (digits < 2) {
        return num;
    }
    int lastDigit = num % 10;
    int divisor = 1;
    for (int i = 0; i < digits - 1; i++) {
        divisor *= 10;
    }
    int firstDigit = num / divisor % 10;
    num -= lastDigit;
    num -= (firstDigit * divisor);
    num += (lastDigit * divisor);
    num += firstDigit;
    return num;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int swappedNumber = swapFirstLastDigits(number);
    printf("Number after swapping first and last digits: %d\n", swappedNumber);
    return 0;
}