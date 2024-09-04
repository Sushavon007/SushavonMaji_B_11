#include<stdio.h>
void oddEven(int a, int b){
    if(a>b){
        printf("%d is maximum & %d is minimum",a,b);
    }
    else{
        printf("%d is maximum & %d is minimum",b,a);
    }
}
int main(){
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1, &num2);
    oddEven(num1,num2);
    return 0;
}