#include <stdio.h>
#include <conio.h>
int main()
{
    int a=11,d=11,n,sum,n1;
    printf("The given series is:\n 11+22+33+44+.....\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    n1=a+(n-1)*d;
    sum=(a+n1)*n/2;
    printf("Sum to n terms=%d",sum);
    getch();
    return 0;
}