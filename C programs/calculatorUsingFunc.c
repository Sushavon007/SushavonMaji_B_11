#include<stdio.h>
#include<stdlib.h>

int addition(int a, int b){
    return (a+b);
}
int subtracttion(int a, int b){
    return (a-b);
}
int multiplication(int a, int b){
    return (a*b);
}
int division(int a, int b){
    if(b!=0) {
        return (a/b);
    } else{
        printf("Division by zero is not allowed");
        exit(0);
    }
}
int main(){
    int num1, num2, ch, result;
    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);
    printf("\nPress 1 to addition---> \nPress 2 to subtraction---> \nPress 3 to multiplication---> \nPress 4 to division---> \nchoice: ");
    scanf("%d", &ch);
    switch(ch){
        case 1: result = addition(num1, num2); 
                break;
        case 2: result = subtracttion(num1, num2); 
                break;
        case 3: result = multiplication(num1, num2); 
                break;
        case 4: result = division(num1, num2); 
                break;
        default: printf("Wrong input..!");
                 exit(0);
    }
    printf("Result : %d",result);
}
