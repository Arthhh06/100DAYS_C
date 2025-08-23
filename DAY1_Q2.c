// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
#include<conio.h>

void main(){
    int a,b;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    // ADD
    printf("The sum of the numbers is:%d \n",a+b);

    // DIFF
    printf("The difference of the numbers is:%d \n",a-b);
 
    // PRODUCT
    printf("The product of the numbers is:%d \n",a*b);

    // Quotient
    if (b==0)
    printf("The quotient of the numbers is: Indefinite \n");
    else 
    printf("The quotient of the numbers is:%d \n", a/b);
    getch();



}