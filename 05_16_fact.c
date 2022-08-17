//05_16_WAP that use a function called factorial(). This function takes a no. as an argument and returns the factorial value of that no
#include <stdio.h>
#include <conio.h>
void factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    factorial(n);
    getch();
    return 0;
}