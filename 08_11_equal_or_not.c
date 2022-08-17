//11.WAP to check if two string are equsl or not.

#include<string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char c[25],d[25];
    printf("Enter two strings:\n");
    gets(c);
    gets(d);
    if(strcmp(c,d)==0)
        printf("Equal strings");
    else
        printf("Not equal strings");
    getch();
    return 0;
}