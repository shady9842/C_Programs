//06_02_WAP to sum and average of all the elements of array
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,sum=0,a[5],avg;
    printf("Enter the elements in array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("Sum=%d\n Average=%d",sum,avg);
    getch();
    return 0;
}