// Write a program to check if a number is an Armstrong number.


#include<stdio.h>
#include<math.h>

int main(){
    int num,numcopy,arm=0,original,len=0,temp;
    clrscr();
    
    printf("Enter the number :");
    scanf("%d",&num);

    original=num;
    numcopy=num;

// To calculate the length of the number
    while (num>0) {
        ++len;
        num=num/10;}

// To make the armstrong number
    while(numcopy>0){
        temp=numcopy%10;
        arm=arm+pow(temp,len);
        numcopy=numcopy/10;
    }

if (original==arm)
    printf("%d is an armstrong number.",original);

else 
printf("%d is not an armstrong number.",original);

getch();
return 0;
}
