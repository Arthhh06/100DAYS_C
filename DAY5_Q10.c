// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main() {
    int time,temptime,hr,min,sec=0;
    clrscr();
    printf("Enter the time in seconds:");
    scanf("%d",&time);

    hr=time/3600;
    temptime=time%3600;
    min=temptime/60;
    sec=temptime%60;
        
    printf("%d:%d:%d",hr,min,sec);
    

    return 0;
    getch();


}