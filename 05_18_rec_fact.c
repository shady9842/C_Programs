//05_18_WAP to find the factorial of the no. using recursive function
#include <stdio.h>
#include <conio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial=%d",res);
    getch();
    return 0;
}