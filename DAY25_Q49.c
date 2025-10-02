/*Write a program to print the following pattern:
5
45
345
2345
12345*/

#include<stdio.h>

int main(){
    int lines;
    clrscr();
    printf("Enter the number of lines:");
    scanf("%d",&lines);

    for(int i=lines;i>0;i--){
        for(int j=lines;j>=i;j--){
            printf("%d",j);
        }
    printf("\n");
    }
    getch();
    return 0;
}