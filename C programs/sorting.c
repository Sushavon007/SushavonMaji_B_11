#include<stdio.h>
int sorting(int arr[], int n){
    int i,j,temp,min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int printArr(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[100], i, n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorting: ");
    printArr(arr,n);
    sorting(arr,n);
    printf("\nAfter sorting: ");
    printArr(arr,n);
}