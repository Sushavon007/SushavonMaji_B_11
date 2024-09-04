#include<stdio.h>

int pattern(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(k=(n-1)*2;k>=i*2;k=k-2){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}