#include<stdio.h>

struct company{
    char name[20], add[50], phNo[15];
    int noOfEmp;
}comp;

int main(){
    printf("Enter Company name: ");
    gets(comp.name);
    printf("Enter Company address: ");
    gets(comp.add);
    printf("Enter Company phone no.: ");
    gets(comp.phNo);
    printf("Enter no of employee of the Company: ");
    scanf("%d",&comp.noOfEmp);

    printf("\nCompany name: %s",comp.name);
    printf("\nCompany address: %s",comp.add);
    printf("\nCompany phone no.: %s",comp.phNo);
    printf("\nCompany no of employee: %d",comp.noOfEmp);
}