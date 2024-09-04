#include <stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next, i;
    printf("Fibonacci Series up to %d terms: \n", n);
    printf("%d, %d, ", first, second);
    for (i = 2; i < n; ++i) {
        next = first + second;
        printf("%d", next);
        if (i < n - 1) {
            printf(", ");
        }
        first = second;
        second = next;
    }
    printf("\n");
}
int main() {
    int terms;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}