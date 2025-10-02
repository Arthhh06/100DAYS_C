// Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main() {
    int a,b,c;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("%d\n%d",a,b);
    return 0;
    getch();


}
