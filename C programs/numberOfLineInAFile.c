#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    int count=1;
    FILE *fp1=NULL;
    fp1 = fopen("file1.txt", "r");
    if(fp1 == NULL){
        printf("\nFile have %d lines\n",count);
        exit(0);
    }
    while((ch=fgetc(fp1))!=EOF){
        if(ch=='\n')
            count++;
    }
    printf("\nFile have %d lines\n",count);
    fclose(fp1);
}