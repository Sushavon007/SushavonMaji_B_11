#include<stdio.h>
int main(){
    long n,temp,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp/=10;
        count++;
    }
    printf("\nNumber of digit is: %d ",count);
    return 0;
}