#include<stdio.h>
int factorial(int n){
    if(n==1)
        return 1;
    else
        return (factorial(n-1)*n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is : %d",n,factorial(n));
    return 0;
}