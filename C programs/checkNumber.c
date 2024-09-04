#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n>0){
        printf("%d is a positive number",n);
    }
    else if(n<0){
        printf("%d is a negetive number",n);
    }
    else{
        printf("%d is zero",n);
    }
}