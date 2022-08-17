//4.WAP to input a string & reverse the string.

#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a string:\n");
    gets(str);
    printf("%s",strrev(str));
    getch();
    return 0;
}