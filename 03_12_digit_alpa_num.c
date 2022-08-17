#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=65&&a<=90||a>=97&&a<=122)
    printf("Alphabet");
    else if(a>=48&&a<=57)
    printf("Number");
    else
    printf("Special Character");
    getch();
    return 0;
}