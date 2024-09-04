#include<stdio.h>
int main(){
    char input;
    printf("Press a key: ");
    scanf("%c",&input);
    if((input>=65 && input<=90) || (input>=97 && input<=122)){
        printf("%c is a Alphabet",input);
    }
    else if(input>=48 && input<=57){
        printf("%c is a Number",input);
    }
    else{
        printf("%c is a Special character",input);
    }
}