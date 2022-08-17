#include <stdio.h>
#include <conio.h>
int main()
{
    int num,revnum=0,a;
    printf("Enter a number:");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        revnum=revnum*10;
        revnum=revnum+num%10;
        num=num/10;
    }
   (a==revnum)?printf("The number is palindrome."):printf("The number is not palindrome.");
    getch();
    return 0;
}