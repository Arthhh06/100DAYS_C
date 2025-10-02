// Write a program to check if a number is a palindrome.

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

    if (original==rev)
        printf("%d is a palindrome ",original);
    else 
        printf("%d is not a palindrome",original);

    getch();
    return 0;
    }