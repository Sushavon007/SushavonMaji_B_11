#include <stdio.h>
void findDigitFrequency(int num) {
    int digitFreq[10] = {0}; 
    while (num != 0) {
        int digit = num % 10;
        digitFreq[digit]++; 
        num = num / 10;    
    }
    printf("Frequency of each digit in the number:\n");
    for (int i = 0; i < 10; i++) {
        if (digitFreq[i] > 0) {
            printf("Digit %d occurs %d time(s)\n", i, digitFreq[i]);
        }
    }
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    findDigitFrequency(number);
    return 0;
}