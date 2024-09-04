#include<stdio.h>
int main(){
    int bs, ex, pow, res=1;
    printf("Input Base: ");
    scanf("%d", &bs);
    printf("Input Exponent: ");
    scanf("%d", &ex);
    pow=ex;
    while(ex>0){
        res=res*bs;
        ex--;
    }
    printf("%d ^ %d = %d\n",bs,pow,res);
}