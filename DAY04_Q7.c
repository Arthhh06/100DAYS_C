// Write a program to swap two numbers without using a third variable.


#include<stdio.h>

int main() {
    int a,b;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    return 0;
    getch();


}
