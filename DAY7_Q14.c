// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main() {
    char ch;
    clrscr();
    printf("Enter the character:");
    scanf("%c",&ch);


    if(ch==97 || ch=='e' || ch=='i' || ch=='o' || ch=='u'||ch==65 || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("%c is a vowel",ch);
    }

    else printf("%c is a consonant",ch);

    return 0;
    getch();

}
