#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
    printf("Lower case=%c",a+32);
    else if(a>=97&&a<=122)
    printf("Upper case=%c",a-32);
    getch();
    return 0;
}