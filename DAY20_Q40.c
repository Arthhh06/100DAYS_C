// Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
#include<string.h>
int main(){
    int length;
    char arr[100];
    char oldarr[50]; 
    clrscr();
    printf("Enter the binary number: ");
    gets(arr);   //to input the binary number 
    strcpy(oldarr,arr); // to store the original number


    length=strlen(arr);
    
    for(int i=0;i<length;i++){
        if(arr[i]=='0'){
            arr[i]='1';
        }
        else if(arr[i]=='1'){
            arr[i]='0';
        }}
     printf("The 1's complement of %s is: ",oldarr);
     puts(arr);
     getch();   
     return 0;
    }


    






    
