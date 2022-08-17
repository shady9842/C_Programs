//07_02_b_WAP that takes two numbers from user and evalutes the sum,difference and product using pointer and function

#include <stdio.h>
#include <conio.h>
void fun(int *p,int *q)
{
    int sum,diff,pro;
    sum=*p+*(p+1);
    diff=*p-*(p+1);
    pro=*p**(p+1);
    printf("Sum=%d\t Difference=%d\t Product=%d",sum,diff,pro);
}
int main()
{
    int a,*p,*q,sum,diff,pro;
    p=&a;
    q=p+1;
    printf("Enter two numbers:\n");
    scanf("%d%d",&*p,&*q);
    fun(p,q);
    getch();
    return 0;
}