#include <stdio.h>
#include <conio.h>
int main()
{
    int  a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    (a>b)?printf("Sum=%d",a+b):printf("Product=%d",a*b);
    getch();
    return 0;
}