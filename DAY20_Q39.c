// Write a program to find the product of odd digits of a number.


#include<stdio.h>
int main(){
    int num,original,temp,product=1;
    clrscr();
    printf("Enter the number :");
    scanf("%d",&num);

    original=num;


    while(num>0){
        temp=num%10;
        if(temp%2!=0){
            product=product*temp;
        }
        num=num/10;
    }
printf("The product of all the odd digits of %d is  %d",original,product );

getch();
return 0;
}

