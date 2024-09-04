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
    int *arr;
    int initialSize, newSize;
    printf("Enter the initial size of elements: ");
    scanf("%d", &initialSize);
    if (initialSize <= 0) {
        printf("Size should be greater than 0.\n");
        return 1;
    }
    arr = (int *)malloc(initialSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", initialSize);
    for (int i = 0; i < initialSize; i++) {
        scanf("%d", &arr[i]);
    }
    displayElements(arr, initialSize);
    printf("Enter the new size for reallocation: ");
    scanf("%d", &newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    printf("Enter additional %d elements:\n", newSize - initialSize);
    for (int i = initialSize; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }
    displayElements(arr, newSize);
    free(arr);
    return 0;
}