#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("sum=%d average=%.2f",sum,avg);
    getch();
    return 0;
}