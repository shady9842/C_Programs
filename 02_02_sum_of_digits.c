//02_02_sum_of_digits
#include <stdio.h>
#include <conio.h>
int main()
{
    int num,d,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    printf("sum=%d",sum);
    getch();
    return 0;
}