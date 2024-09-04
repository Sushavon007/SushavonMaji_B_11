#include <stdio.h>
#include <stdlib.h>
void displayElements(int *arr, int n) {
    printf("Elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of elements should be greater than 0.\n");
        return 1;
    }
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    displayElements(arr, n);
    free(arr);
    return 0;
}