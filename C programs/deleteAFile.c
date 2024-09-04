#include<stdio.h>

int main(){
    if(remove("destinationfile.txt")==0)
        printf("\nFile deleted successfully\n");
    else
        printf("\nError in deleting file\n");
    return 0;
}