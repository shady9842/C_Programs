#include <stdio.h>
#include <conio.h>
int main()
{
    int num,sum=0,a,b;
    printf("Enter a number:");
    scanf("%d",&num);
    b=num;
    while(num!=0)
    {
        a=num%10;
        sum=sum+a*a*a;
        num=num/10;
    }
    (b==sum)?printf("It is an armstrong number"):printf("It is not an armstrong number.");
    getch();
    return 0;
}