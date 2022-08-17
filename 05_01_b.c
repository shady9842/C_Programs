//05_01_b_WAP to read a number n and calculate its cube using Argument and no return type function


#include <stdio.h>
#include <conio.h>
void cube(int a)
{
    printf("Cube=%d",a*a*a);
}
int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    cube(x);   
    getch();
    return 0;
}