//05_07_WAP to read a character and convert it into upper case if it is lowercase and vice versa
#include <stdio.h>
#include <conio.h>
void chr(char a)
{
    if(a>='a'&&a<='a')
    printf("%c",a-32);
    else
    printf("%c",a+32);
}
void main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    chr(a);
    getch();
}