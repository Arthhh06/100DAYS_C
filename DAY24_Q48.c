/*Write a program to print the following pattern:
1
12
123
1234
12345*/

#include<stdio.h>

int main(){
    
    int lines;
    clrscr();
    printf("Enter the number of lines: ");
    scanf("%d",&lines);

    for(int i=1;i<=lines;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}