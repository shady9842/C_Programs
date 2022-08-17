#include <stdio.h>
#include <conio.h>
int main()
{
    int num,d,sum=0;
    printf("Enter a 3 digit no.:");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum+d*d;
        num=num/10;
    }
    printf("Sum=%d",sum);
    getch();
    return 0;
}