// #include<stdio.h>
// int main(){
//     int num1, num2, result;
//     printf("Enter 2 numbers: ");
//     scanf("%d %d",&num1, &num2);
//     result=(num1>num2)?num1:num2;
//     printf("%d is maximum between %d & %d",result, num1, num2);
// }

// Maximum between 3 numbers-----------------------------------------------

#include<stdio.h>
int main(){
    int num1, num2, num3, result;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    result=(num1>num2)?((num1>num3)?num1:num2):((num2>num3)?num2:num3);
    printf("%d is maximum between %d, %d & %d",result, num1, num2, num3);
}