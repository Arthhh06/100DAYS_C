// Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int num1,num2,hcf=0;
    clrscr();
    printf("Enter the numbers for HCF:");
    scanf("%d %d",&num1,&num2);

    for(int i=1;i<=num1;i++){
        if((num1%i==0) && (num2%i==0)){
            hcf=i;      // To store the common factor and the last common factor will be the highest common factor.
        }
    }
    if (hcf==0){
    printf("The %d & %d have no common factors",num1,num2);
    }
    else{
        printf("The HCF of %d & %d is : %d ",num1,num2,hcf);
    }
getch();
return 0;
}

