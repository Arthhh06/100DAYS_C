// Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main() {
    int a,b,c;
    clrscr();
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    printf("Enter 3rd number:");
    scanf("%d",&c);


    if(c>a && c>b) printf("%d is greater",c);

    else if(b>a && b>c) printf("%d is greater",b);

    else if(a==b && b==c ) printf("All are equal");

    else printf("%d is greater",a);
    return 0;

    getch();


}
