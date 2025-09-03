// Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main() {
    int n;
   
    clrscr();
    printf("Enter the marks in percentage:");
    scanf("%d",&n);

    if(n>=91 && n<=100) printf("Grade A");

    else if(n>=81 && n<=90) printf("Grade B");
    
    else if(n>=71 && n<=80) printf("Grade C");

    else if(n>=61 && n<=70) printf("Grade D");

    else if(n>=51 && n<=60) printf("Grade E");

    else printf("Grade F");

    return 0;
    getch();

}
