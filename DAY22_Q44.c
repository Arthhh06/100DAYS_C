// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>

int main(){
    int term;
    float sum=0;
    float numerator=3,denominator=4;
    clrscr();

    printf("Enter the number of terms:");
    scanf("%d",&term);

    if(term==1){
        sum=1;
    }
    else{
        sum=1;
        for(int i=2;i<=term;i++){
            sum+=(numerator/denominator);
            numerator+=2;
            denominator+=2;
        }
    }
    printf("The sum of %d terms is : %.2f ",term, sum);
    getch();
    return 0;
}