#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    (a>0)?printf("Positive number"):printf("Negative number");
    getch();
    return 0;
}