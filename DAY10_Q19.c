// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main() {
    int a,b,c;
   
    clrscr();
    printf("Enter the first side:");
    scanf("%d",&a);
    printf("Enter the second side:");
    scanf("%d",&c);
    printf("Enter the base:");
    scanf("%d",&b);


    if(a==b && b==c) printf("Triangle is an equilateral triangle");

    else if(a!=b && b!=c && c!=a) printf("Triangle is a scalene triangle");
    
    else if((a==b && b!=c) || (b==c && a!=c) || (c==a && a!=b)) printf("Isosceles triangle.");

    
    return 0;
    getch();

}
