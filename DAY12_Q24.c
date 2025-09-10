/* Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit  */


#include<stdio.h>
 
int main(){
    int units,bill=0;
    // clrscr();

    printf("Enter the units of electricity used:");
    scanf("%d",&units);

    if (units<=100){
        bill=units*5;
    }
    
    else if (units<=200 && units>100){
        bill=500+(units-100)*7;
    }

    else if (units<=300 && units>200){
        bill=500+700+(units-200)*10;
    } 

    else{
        bill=500+700+1000+(units-300)*12;
        }

    printf("The total bill amount for %d is: %d",units,bill);
    

    // getch();
    return 0;

}