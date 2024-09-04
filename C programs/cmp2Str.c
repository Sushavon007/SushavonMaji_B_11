#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    (strcmp(str1,str2)==0)?puts("Both strings are same"):puts("Both strings are different");
    return 0;
}