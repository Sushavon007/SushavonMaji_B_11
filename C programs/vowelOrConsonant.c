#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    bool vowel=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    if(vowel){
        printf("%c is a Vowel",ch);
    }
    else{
    printf("%c is a Consonant",ch);
    }
}