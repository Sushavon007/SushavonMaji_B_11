#include<stdio.h>

int pattern(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            printf("*");
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