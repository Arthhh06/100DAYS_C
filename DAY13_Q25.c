// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// INCOMPLETE

#include<stdio.h>
int main(){
    char operator;
    int num1,num2;
    clrscr();
    printf("Enter the operator (+,-,*,/,%%) :");
    scanf("%c", &operator);

    printf("Enter the first number :");
    scanf("%d", &num1);
    printf("Enter the second number :");
    scanf("%d", &num2);
    




    switch (operator) {
          case '+' : printf("%d",num1+num2);
                 break;
          case '-' : printf("%d",num1-num2);
                 break;
          case '*' : printf("%d",num1*num2);
                 break;
          case '/' : printf("%d",num1/num2);
                 break;
          case '%' : printf("%d",num1%num2);
                 break;
           
         default : printf("Not a valid input");
    }
    getch();
    return 0;
}