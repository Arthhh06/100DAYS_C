// Write a program to calculate the factorial of a number.


#include<stdio.h>
int main(){

    int num;
    long int fact=1;
    clrscr();

    printf("Enter the number to calculate its factorial:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is: %ld",num,fact );
    getch();
    return 0;

}



/* THROUGH RECURSIONS



int fact(int num);


int main(){
    int num;
    printf("Enter the number to calculate its factorial:");
    scanf("%d",&num);
    printf("The factorial of %d is : %ld",num,fact(num));

    return 0;
}

int fact(int num){
    int factnm1,factf=1;
    if (num==0){
        return 1;
    }
    factnm1=fact(num-1);
    factf=factnm1*num;
    return factf;
} */