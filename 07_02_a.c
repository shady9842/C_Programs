//07_02_a_WAP that takes two numbers from user and evalutes the sum,difference and product using pointer

#include <stdio.h>
#include <conio.h>
int main()
{
    int a,*p,sum,diff,pro;
    p=&a;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&*p,&*(p+1));
    sum=*p+*(p+1);
    diff=*p-*(p+1);
    pro=*p**(p+1);
    printf("Sum=%d\t Difference=%d\t Product=%d",sum,diff,pro);
    getch();
    return 0;
}