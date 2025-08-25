// Write a program to find and display the sum of the first n natural numbers

#include<stdio.h>

int main() {
    int a,sum=0;
    clrscr();
    printf("Enter the number of terms");
    scanf("%d",&a);

    for(int i=0;i<=a;i++)
        { sum+=i;}

    printf("%d\n",sum);
    return 0;
    getch();


}