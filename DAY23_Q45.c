// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>

int main(){
    int term;
    float sum=0;
    float numerator=2,denominator=3;
    clrscr();

    printf("Enter the number of terms:");
    scanf("%d",&term);

    for(int i=1;i<=term;i++){
        sum=sum+(numerator/denominator);
        numerator+=2;
        denominator+=4;
    }

    printf("The sum of %d terms is : %.2f ",term, sum);

    getch();
    return 0;
}