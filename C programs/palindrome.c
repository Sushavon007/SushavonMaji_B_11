#include<stdio.h>
void palindrome(int n){
    int reverse=0,temp,reminder;
    temp = n;
    while(n!=0) {
        reminder = n%10;
        reverse = (reverse*10)+reminder;
        n /= 10;
    }
    if(temp==reverse){
        printf("%d is a Palindrome number",temp);
    }
    else{
        printf("%d is not a Palindrome number",temp);
    }
}
int main(){
    int n;
    printf("Enter a number to check Palindrome or Not: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}