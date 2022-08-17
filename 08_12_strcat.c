//12.WAP to read 2 strings, join it and display it using strcat().

#include<string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char c[50],d[50];
    printf("Enter two strings:\n");
    gets(c);
    gets(d);
    strcat(c,d);
    printf("Combined\n %s\t",c);
    getch();
    return 0;
}