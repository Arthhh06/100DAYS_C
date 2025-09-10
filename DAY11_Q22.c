// Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){

    int cp,sp;
    float balance=0;
    clrscr();
    printf("Enter the cost price  :  ");
    scanf("%d", &cp);
    printf("Enter the selling price  :  ");
    scanf("%d", &sp);

    if (sp>cp){
        balance=(sp-cp)/100;
        printf("The profit percentage is %f ",balance);}

    else if(cp>sp){
        balance=(cp-sp)/100;
        printf("The loss percentage is %f ",balance);}
    
    else 
        printf("There is no profit or loss");
    
getch();
return 0;
}

