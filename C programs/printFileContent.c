#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    FILE *fp1=NULL;
    fp1 = fopen("file1.txt", "r");
    if(fp1 == NULL){
        printf("\nError..!\n");
        exit(0);
    }
    while((ch=fgetc(fp1))!=EOF){
        putch(ch);
    }
    printf("Successfully printed");
    fclose(fp1);
}