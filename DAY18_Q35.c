// Write a program to print all factors of a given number.

#include<stdio.h>
int main(){
    int num,c=0;
    clrscr();
    printf("Enter the number :");
    scanf("%d",&num);
    
    printf("The factors of %d are :", num);

    for(int i=1; i<=num; ++i){
        if(num%i==0){
            printf("%d ",i);
            ++c;
        }    }

    printf("\n The total factors of %d are: %d",num,c);

    getch();
    return 0;
}
