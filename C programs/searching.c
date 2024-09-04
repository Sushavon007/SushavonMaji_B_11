#include<stdio.h>
int searching(int arr[], int n, int ele){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[100],n,i,ele;
    printf("Enter the size array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&ele);
    searching(arr,n,ele)?printf("Element Found"):printf("Element not Found");
}