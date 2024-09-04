#include<stdio.h>
#include<stdlib.h>

int checkPrime(int num){
    int flag=0;
    for(int i=2; i<(num/2); i++){
        if(num%i==0){
            printf("%d is not a Prime number.\n", num);
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("%d is a Prime number.\n", num);
    }   
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPrime(num);
}