// Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,max,lcm;
    clrscr();
    printf("Enter the two positive numbers for LCM:");
    scanf("%d %d",&num1,&num2);


    if(num1>num2){   //To know which number is greater as it can be the lcm
        max=num1;
    }
    else{
        max=num2;
    }

    while(1){
        if(max%num1==0 && max%num2==0){      // by checking both the numbers are divisible by the max or not & them incrementing it
            lcm=max;
            break;
        }
        max++;
    }
     printf("The lcm of %d & %d is: %d",num1,num2,max);
getch();
return 0;
}