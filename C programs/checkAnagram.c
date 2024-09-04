#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sortString(char str[]){
    int i, j, len=strlen(str);
    char temp;
    for(i=0; i<len; i++){
        for(j=i+1; j<len; j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int checkAnagram(char str1[], char str2[]){
    int i;
    sortString(str1);
    sortString(str2);
    if(strcmp(str1, str2)==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int result;
    char input1[30], input2[30];
    printf("Enter string 1: ");
    gets(input1);
    printf("Enter string 2: ");
    gets(input2);
    result = checkAnagram(input1, input2);
    if(result == 1){
        printf("\nBoth strings are anagrams.");
    }else{
        printf("\nBoth strings are not anagrams.");
    }
    return 0;
}