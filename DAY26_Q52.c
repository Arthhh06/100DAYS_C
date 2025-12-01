/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/

#include<stdio.h>
void main(){
    clrscr();
    for(int i=1;i<=5;i=i+2){
        for(int j=i;j>0;j--){
            printf("*\n");
        }
        printf("\n");
    }

    for(int i=3;i>=1;i=i-2){
        for(int j=i;j>0;j--){
            printf("*\n");
        }
        printf("\n");
    }
    getch();
}