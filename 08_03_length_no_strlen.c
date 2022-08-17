//3.WAP to read a string & find out the length of string.(do not use strlen)

#include <stdio.h>
#include <conio.h>
int main()
{
    int i=0,l=0;
    char str[50];
    printf("Enter a line of string:\n");
    gets(str);
    for ( i = 0; str[i]!='\0'; i++)
        l++;
    printf("Length of string=%d",l);
    getch();
    return 0;
}