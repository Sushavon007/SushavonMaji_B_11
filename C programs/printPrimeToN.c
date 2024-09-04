#include<stdio.h>
int checkPrime(int num){
    int i,flag=0;
    for(i=2; i<num; i++){
        if((num%i)==0)
            flag=1;
    }
    if(flag==0 && num!=2){
        printf("%d ",num);
        }
}
int main(){
    int n,i;
    printf("Enter the bound of prime numbers: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        checkPrime(i);
    }
    return 0;
}