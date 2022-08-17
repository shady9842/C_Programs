//07_06_WAP to sort n numbers in ascending order using DMA and function

#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
void sort(int *p,int *n)
{
    int i,j,t;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
int main()
{
    int *p,n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    p=(int*)malloc(n*(sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",&*(p+i));
    sort(p,&n);
    printf("\n After sorting:\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
    getch();
    return 0;
}
