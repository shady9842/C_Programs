//3.WAP to read name and age from the user in the user defined file and print it.

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
    int age;
    char ch[25];
    FILE *FP;
    FP=fopen("10_03_Bio.txt","w");
    printf("Enter the name and age:\n");
    gets(ch);
    scanf("%d",&age);
    fprintf(FP,"%s\t%d",ch,age);
    fclose(FP);
    printf("Entered Details are:\n Name\t Age\n");
    FP=fopen("10_03_Bio.txt","r");
    fscanf(FP,"%s%d",&ch,&age);
    printf("%s\t%d",ch,age);
    fclose(FP);
    getch();
    return 0;
}