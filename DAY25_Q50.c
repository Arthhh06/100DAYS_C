/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/

    #include<stdio.h>

int main(){
    int lines;
    clrscr();
    printf("Enter the number of lines:");
    scanf("%d",&lines);

    for(int i=0;i<lines;i++){
        for(int k=0;k<i;k++){
            printf(" ");}
        for(int j=lines;j>i;j--){
            printf("*");
        }
    printf("\n");
    }
    getch();
    return 0;
}