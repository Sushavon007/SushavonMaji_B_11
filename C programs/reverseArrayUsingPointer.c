#include<stdio.h>
void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int reverse(int arr[], int size){
    int *startPtr=arr, *endPtr=arr+size-1;
    while(startPtr<endPtr){
        swap(startPtr,endPtr);
        startPtr++;
        endPtr--;
    }
}
int main(){
    int n,i,arr[100];
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements are (before reverse): ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    reverse(arr,n);
    printf("\nElements are (after reverse): ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}