#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[20][20],B[20][20],C[20][20];
    int i, j, k, r1, c1, r2, c2, sum;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the elements of matrix A:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
             scanf("%d", &A[i][j]);
        }
    }
    printf("\nMatrix A is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("\nEnter the elements of matrix B:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
             scanf("%d", &B[i][j]);
        }
    }
    if(c1!=r2){
        printf("\nMultiplication is not possible");
        exit(0);
    }
    printf("\nMatrix B is:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++){
            for(j=0;j<r1;j++){
                sum = 0;
                for(k=0;k<c1;k++){
                    sum += A[i][k] * B[k][j];
                }
                C[i][j] = sum;
            }
        }
        printf("\nMultiplication is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
}