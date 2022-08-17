//1.WAP to read character from keyboard and store in file, read it from file and display it on the screen

#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
    char ch;
    FILE *FP;
    FP=fopen("10_01_Character.txt","w");
    printf("Enter the character:\n");
    scanf("%c",&ch);
    fprintf(FP,"%c",ch);
    fclose(FP);
    FP=fopen("10_01_Character.txt","r");
    fscanf(FP,"%c",&ch);
    printf("Printed character in file is %c",ch);
    fclose(FP);
    getch();
    return 0;
}