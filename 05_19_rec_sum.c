//05_19_WAP to find the sum of given non-negative integer using a recursive function
#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}
int main()
{
    int n,res;
    printf("Enter a number:");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum=%d",res);
    getch();
    return 0;
}