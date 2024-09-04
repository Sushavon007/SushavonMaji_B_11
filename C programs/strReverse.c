#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    printf("Enter string: ");
    gets(str);
    strrev(str);
    printf("Reverse string: %s",str);
    return 0;
}