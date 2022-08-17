//07_15_.WAP to find the length of given string

#include <stdio.h>
#include <conio.h>
int main()
{
    char i,str[15],*p;
    p=str;
    printf("Enter the string:\n");
    scanf("%s",&str);
    i=0;
    while(*(p+i)!='\0')
        i++;
    printf("length of string=%d",i);
    getch();
    return 0;
}