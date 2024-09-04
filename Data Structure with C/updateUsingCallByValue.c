#include <stdio.h>
#define MAX_SIZE 100
void updateArray(int arr[], int size) {
    printf("Array elements inside the function before update:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        arr[i] += 5; // Adding 5 to each element of the array
    }
    printf("\n");
}
void printArray(int arr[], int size) {
    printf("Array elements inside the calling function after update:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int size;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements inside the calling function before update:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    updateArray(arr, size);
    printArray(arr, size);
    return 0;
}