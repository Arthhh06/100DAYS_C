/**Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled. */


#include<stdio.h>
 
int main(){
    int latedays,fine=0;
    clrscr();

    printf("Enter the number of late days:");
    scanf("%d",&latedays);

    if (latedays<=5){
        fine=latedays*2;
    }
    
    else if (latedays<=10 && latedays>5){
        fine=10+(latedays-5)*4;
    }

    else if (latedays<=30 && latedays>10){
        fine=30+(latedays-10)*6;
    } 

    if (fine!=0)
        printf("FINE:%d",fine);
    else if (latedays>30){
        printf("The membership is cancelled.");
    }

    getch();
    return 0;

}
