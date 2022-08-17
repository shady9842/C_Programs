//2.WAP to read character until the enter key is pressed and change all character to upper case and display it.

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
    int i;
    char ch[25];
    FILE *FP;
    FP=fopen("10_02_Line_Of_Character.txt","w");
    printf("Enter the line of character:");
    gets(ch);
    strupr(ch);
    fprintf(FP,"%s",ch);
    fclose(FP);
    FP=fopen("10_02_Line_Of_Character.txt","r");
    fscanf(FP,"%c",&ch);
    printf("Printed character in file are:\n");
    i=0;
    while((ch[i]=fgetc(FP)) != EOF)
    {
        printf("%c\t",ch[i]);
        i++;
    }
    fclose(FP);
    getch();
    return 0;
}