// Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int num,c=0;
    clrscr();
    printf("Enter the number :");
    scanf("%d",&num);

    for(int i=2;i<num/2;i++){
        if (num%i==0){
            ++c;
            printf("%d is not a prime number.",num);
            break;
        }}

        if(num==2){
            printf("2 is a prime number.");
        }
        else if (c==0){
            printf("%d is a prime number.",num);
        }
getch();
return 0;
}