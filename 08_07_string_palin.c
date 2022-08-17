//7.WAP that reads a string & checks if it is a palindrome.

#include <stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
    char str[15],temp[15];
    printf("Enter a string:\n");
    gets(str);
    strcpy(temp,str);
    strrev(str);
    if(strcmp(temp,str)==0)
        printf("palindrome string\n");
    else
        printf("Not palindrome string");
    getch();
    return 0;
}