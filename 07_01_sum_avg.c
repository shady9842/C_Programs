//07_01_WAP using pointer to compute sum and average of elements of array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5],sum=0,avg,i,*p;
    p=&a[0];
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        sum=sum+*(p+i);
    avg=sum/5;
    printf("Sum=%d\t avg=%d",sum,avg);
    getch();
    return 0;
}