#include<stdio.h>
int main(){
    int arr[20][20],r,c,i,j,zero=0;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    printf("Enter elements to the matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==0){
                zero++;
            }
        }
    }
    if(zero>(c*r/2))
        printf("This is a Sparse matrix");
    else
        printf("This is not a sparse matrix");
}