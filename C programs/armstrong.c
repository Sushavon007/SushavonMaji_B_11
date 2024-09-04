#include<stdio.h>
#include<math.h>
void armstrong(int n){
    int armstrong=0,temp,digit,i,count=0;
    temp=n;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=n;
    while(temp>0){
        digit=temp%10;
        temp/=10;
        armstrong+=pow(digit,count);
    }
    if(armstrong==n){
        printf("%d is an Armstrong number",n);
    }
    else{
        printf("%d is not an Armstrong number",n);
    }

}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}