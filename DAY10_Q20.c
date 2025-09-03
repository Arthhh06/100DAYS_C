// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include<stdio.h>
int main(){
    int day;
    clrscr();
    printf("Enter the day (1-7)  :  ");
    scanf("%d", &day);


    switch (day) {
          case 1 : printf("MONDAY \n");
                 break;
          case 2 : printf("TUESDAY");
                 break;
          case 3 : printf("WEDNESDAY");
                 break;
          case 4 : printf("THRUSDAY");
                 break;
          case 5 : printf("FRIDAY");
                 break;
          case 6 : printf("SATURDAY");
                 break;
          case 7 : printf("SUNDAY");
                 break;
         default : printf("Not a valid input");
    }
    printf("Enter the first side");
    scanf("%d",&a);
    getch();
    return 0;
}