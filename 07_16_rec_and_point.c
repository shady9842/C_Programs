//07_16_WAP using recursion and pointer that prints the given string in reverse order

#include <stdio.h>
#include <conio.h>
void reverse()
{
    char c,*p;
    p=&c;
    scanf("%c",&*p);
    if(*p!='\n')
    {
        reverse();
        printf("%c",*p);
    }
}
int main()
{
    printf("Enter a string:\n");
    reverse();
    getch();
    return 0;
}