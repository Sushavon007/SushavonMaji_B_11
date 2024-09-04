#include<stdio.h>
int main(){
    int num1, num2, lcm, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    gcd=(num1>num2)?num2:num1;
    while(gcd>0){
        if (num1%gcd==0 && num2%gcd==0){
            break;
        }
        gcd--;
    }
    printf("The GCD of the given numbers is : %d\n",gcd);
}