// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>


void main() {
    float cel,faren;
    clrscr();
    printf("The temp in celsius is:");
    scanf("%f",&cel);

    faren = (cel*9)/5+32;
    printf("%f celsius is equal to %f in farenhite",cel,faren);

    getch();

}

