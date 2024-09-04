#include<stdio.h>

int printArr(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[100],i,j,k,n;
    printf("Enter the size array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are: ");
    printArr(arr,n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                k=j;
                while(k<n){
                    arr[k]=arr[k+1];
                    k++;
                }
                j--;n--;
            }
        }
    }
    printf("\nAfter Removing Duplicates: ");
    printArr(arr,n);    
}