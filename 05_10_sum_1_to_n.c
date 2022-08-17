//05_10_WAP to read a no. n and print the sum of natural numbers from 1 to n using function
#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",sum(n));
    getch();
    return 0;
}