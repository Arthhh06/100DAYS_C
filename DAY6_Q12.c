// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>

int main() {
    int n;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);


    if(n>=0){
        if(n==0)
        {printf("Entered number is zero");
        }
        else
        {printf("%d is positive",n);}
    }


    else printf("%d is negative",n);

    return 0;
    getch();



}
