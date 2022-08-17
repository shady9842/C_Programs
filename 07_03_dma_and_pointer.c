//07_03_WAP using DMA and pointer to read n numbers from user and display sum and average

#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
    int *p,sum=0,avg,n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
        sum=sum+*(p+i);
    }
    avg=sum/n;
    printf("sum=%d\t avg=%d",sum,avg);
    free(p);
    getch();
    return 0;
}