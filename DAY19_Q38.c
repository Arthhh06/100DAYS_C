// Write a program to find the sum of digits of a number.


#include<stdio.h>
int main(){
    int num,original,temp,sum=0;
    clrscr();
    printf("Enter the number :");
    scanf("%d",&num);

    original=num;


    while(num>0){
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }

    printf("The sum of all the digits of %d is  %d",original,sum );
getch();
return 0;
}
