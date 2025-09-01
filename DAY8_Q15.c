// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main() {
    char ch;
   
    clrscr();
    printf("Enter :");
    scanf("%c",&ch);

    if (ch>=67 && ch<=90) printf("%c is uppercase alphabet.",ch);

    else if(ch>=97 && ch<=122) printf("%c is lowercase alphabet.",ch);
    
    else if(ch>=48 && ch<=57)printf("%c is digit",ch);

    else printf("%c is a special character.",ch);

    return 0;
    getch();

}

