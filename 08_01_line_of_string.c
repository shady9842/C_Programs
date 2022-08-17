//1.WAP that accepts a line from user & prints it in upper case.(use gets to read line

#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    printf("%s",strupr(str));
    getch();
    return 0;
}