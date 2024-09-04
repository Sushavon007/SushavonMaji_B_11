#include <stdio.h>
#include <stdlib.h>
int searchElement(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int *arr;
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Size should be greater than 0.\n");
        return 1;
    }
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int foundIndex = searchElement(arr, size, key);
    if (foundIndex != -1) {
        printf("Element %d found at index %d.\n", key, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    free(arr);
    return 0;
}