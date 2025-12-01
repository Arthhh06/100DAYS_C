/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*     */



#include<stdio.h>
int main(){
    clrscr();

    for(int i=1;i<=9;i+=2){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

for(int i=9-2;i>0;i-=2){
    for(int j=i;j>0;j--){
        printf("*");
    }
    printf("\n");
}
    getch();
    return 0;
}