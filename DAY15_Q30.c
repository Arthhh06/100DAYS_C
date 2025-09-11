// Write a program to reverse a given number.

#include<stdio.h>

int main(){

    // original --> To store the real value
    int num,original,temp,rev=0;
    clrscr();

    printf("Enter the number :");
    scanf("%d",&num);

    original=num;

    while(num!=0){
        // temp ---> To store the last digit of the number temporarily.
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    printf("%d ---> %d",original,rev);
    getch();
    return 0;
    }