#include<stdio.h>
int main(){
    long long int n,fdigit,ldigit;
    printf("Enter a number:");
    scanf("%lld",&n);
    fdigit=n;
    while(fdigit>=10){
        fdigit/=10;
    }
    ldigit=n%10;
    printf("\nFirst digit of the number is: %d ",fdigit);
    printf("\nLast digit of the number is: %d ",ldigit);
    return 0;
}