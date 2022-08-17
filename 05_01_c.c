//05_01_c_WAP to read a number n and calculate its cube using Argument and return type function
#include <stdio.h>
#include <conio.h>
int cube(int n)
{
    int y;
    y=n*n*n;
    printf("Cube=%d",y);
    return y;
}
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    cube(a);
    getch();
    return 0;
}