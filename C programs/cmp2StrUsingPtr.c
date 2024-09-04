#include<stdio.h>
int main(){
    char str1[30], str2[30];
    char *ptr1, *ptr2;
    printf("Enter 1st String: ");
    gets(str1);
    printf("Enter 2nd String: ");
    gets(str2);
    ptr1 = &str1[0];
    ptr2 = &str2[0];
    while(*ptr1 == *ptr2){
        if ( *ptr1 == '\0' || *ptr2 == '\0' )
            break;
        ptr1++;
        ptr2++;
    }
    if( *ptr1 == '\0' && *ptr2 == '\0' )
        printf("\nBoth Strings Are Equal.");
    else
        printf("\nBoth Strings Are Not Equal.");
}