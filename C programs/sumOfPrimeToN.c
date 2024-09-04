#include<stdio.h>
int sumOfPrime(int num){
    int i,flag=0;
    for(i=2; i<num; i++){
        if((num%i)==0)
            flag=1;
    }
    if(flag==0 && num!=2){
        return num;
    }
    return 0;
}
int main(){
    int n,sum=0,i;
    printf("Enter the bound of prime numbers: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        sum+=sumOfPrime(i);
    }
    printf("Sum of prime numbers till %d = %d\n",n,sum);
    return 0;
}