#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    (a%2==0)?printf("even"):printf("odd");
    getch();
    return 0;
}