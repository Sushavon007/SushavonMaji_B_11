#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("-----Before swapping-----\n");
    printf("First number = %d \nSecond number = %d ", num1, num2);
    swap(&num1, &num2);
    printf("\n-----After swapping-----\n");
    printf("First number = %d \nSecond number = %d ", num1, num2);
}