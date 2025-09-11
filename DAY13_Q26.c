// Write a program to print numbers from 1 to n.

#include<stdio.h>
int main(){

    int num;
    clrscr();

    printf("Enter the number upto which you want to print:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        printf("%d ",i);
    }
    
    getch();
    return 0;

}