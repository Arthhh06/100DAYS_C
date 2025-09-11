// Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int num,sum,i,c=0;
    clrscr();
    
    printf("Enter the number upto which you want to print the sum of odd numbers:");
    scanf("%d",&num);

    while (1) {
        if (i%2!=0){
            sum=sum+i;
            c=c+1;
        }
        i++;
        if (c==num)
        break;

    }
    printf("The sum of first %d odd numbers is: %d",num,sum);
    getch();
    return 0;
}