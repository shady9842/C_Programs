//10.WAP to read a string & find the length using strlen().

#include <stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
    char c[50];
    printf("Enter a string:\n");
    gets(c);
    printf("Length of string=%d", strlen(c));
    getch();
    return 0;
}