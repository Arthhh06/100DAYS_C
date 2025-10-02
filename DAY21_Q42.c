// Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int num,perfectCheck=0;
    clrscr();

    printf("Enter the number:");
    scanf("%d",&num);

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            perfectCheck+=i;
        }
    }

    if(perfectCheck==num){
        printf("Yes, %d is a perfect number.",num);
    }
    else{
        printf("No, %d is not a perfect number.",num);
    }
    getch();
    return 0;
}

