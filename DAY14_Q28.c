// Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main(){

    int num=1;
    int product=1;
    clrscr();
    
    printf("Enter the number upto which you want the product of even numbers:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(i%2==0){
            product=product*i;
        }}
    
    printf("The product of even numbers from 1 to %d is: %d",num,product);
    getch();
    return 0;
}