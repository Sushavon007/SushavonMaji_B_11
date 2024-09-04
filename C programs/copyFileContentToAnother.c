#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("destinationfile.txt", "aw");
    if(fp1 == NULL || fp2==NULL){
        printf("\nError..!\n");
        exit(0);
    }
    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }
    printf("Successfully copied");
    fclose(fp1);
    fclose(fp2);
}