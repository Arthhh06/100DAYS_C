// Write a program to check if a number is a strong number.
// Check sum of the factorials of the digits


#include<stdio.h>
int main(){
    int num,last_digit,temp,strongCheck=0,factorial=1;
    clrscr();

    printf("Enter the number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){
        last_digit=temp%10;
        int factorial=1;       //equals to 1 so that the next factorial can be calculated everytime in the loop
        for(int i=1;i<=last_digit;i++){  //loop to calc the factorials of the digits
            factorial*=i;
        }
        strongCheck+=factorial;
        temp/=10;
    }

    if(strongCheck==num){
        printf("Yes, %d is a strong number.",num);
    }
    else{
        printf("No, %d is not a strong number.",num);
    }
    getch();
    return 0;
}