// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main() {
    float p,r,t,sim,compound,amount,n;
    clrscr();
    printf("Enter the principal amount:");
    scanf("%f",&p);

    printf("Enter the rate:");
    scanf("%f",&r);

    printf("Enter the time period in years:");
    scanf("%f",&t);

    printf("Enter the no of times interest is compounded per year:");
    scanf("%f",&n);


    sim=p*r*t/100;

    r=r/100;
    // Total amount
    amount = p*pow((1+r/n),n*t);

    compound=amount-p;
    
    printf("The simple interest will be:%f\n The compound interest will be:%f",sim,compound);

    return 0;
    getch();


}