// Write a program to swap the first and last digit of a number.


#include<stdio.h>
#include<math.h>

// A func to return the power
int power(int a,int b){
    int sq=1;
    for(int i=1; i<=b ;i++){
    sq=sq*a;}
    return sq;
}



int main(){
    int num,temp,length=0;
    int first_digit,last_digit,swapnum;

    printf("Enter the number (not starting from 0's) : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){
        length++;
        temp/=10;}
    
    temp=num;
    
    // Extracting the values
    first_digit=temp/power(10,length-1);
    last_digit=temp%10;
    
    
    // removing the values
    temp=temp%power(10,length-1); // removing the first value
    temp=temp/10;  //removing the last value

    //printf("%d \t %d \t %d \n",first_digit,last_digit,temp); // to check the slicing

    // construct
    swapnum=last_digit*power(10,length-1) + temp*10 + first_digit;
    printf("The replace of %d is : %d",num,swapnum);
return 0;
}

