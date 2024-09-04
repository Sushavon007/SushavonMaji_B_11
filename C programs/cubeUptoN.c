#include <stdio.h>
void displayCubeUptoN(int N) {
    if (N <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
        return;
    }
    printf("Cubes of numbers from 1 to %d:\n", N);
    for (int i = 1; i <= N; i++) {
        int cube = i * i * i;
        printf("Cube of %d = %d\n", i, cube);
    }
}
int main() {
    int num;
    printf("Enter a number (N) to display cubes up to N: ");
    scanf("%d", &num);
    displayCubeUptoN(num);
    return 0;
}