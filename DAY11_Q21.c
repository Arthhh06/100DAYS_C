// Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main(){
    int month;
    clrscr();
    printf("Enter the month (1-12)  :  ");
    scanf("%d", &month);


    switch (month) {
          case 1 : printf("JANUARY-31 DAYS \n");
                 break;
          case 2 : printf("FEBURARY-28 DAYS");
                 break;
          case 3 : printf("MARCH-31 DAYS");
                 break;
          case 4 : printf("APRIL-30 DAYS");
                 break;
          case 5 : printf("MAY-31 DAYS");
                 break;
          case 6 : printf("JUNE-30 DAYS");
                 break;
          case 7 : printf("JULY-31 DAYS");
                 break;
          case 8 : printf("AUGUST-31 DAYS");
                 break;
          case 9 : printf("SEPTEMBER-30 DAYS");
                 break;
          case 10 : printf("OCTOBER-31 DAYS");
                 break;
          case 11 : printf("NOVEMBER-30 DAYS");
                 break;
          case 12 : printf("DECEMBER-31 DAYS");
                 break;
                 
         default : printf("Not a valid input");
    }
    getch();
    return 0;
}