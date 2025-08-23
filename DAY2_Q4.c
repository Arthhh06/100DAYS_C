// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#include<conio.h>
void main(){
    float r,area,cir;

    printf("The radius of the circle is:");
    scanf("%f",&r);
    
    area=3.14*r*r;
    printf("The area of the circle is %f sq units \n", area);
    cir=2*3.14*r;
    printf("The perimeter of the circle is %f sq units", cir);


    getch();

}