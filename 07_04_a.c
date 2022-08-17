//07_04_a_WAP to find largest and smallest number from list of number using pointer

#include <stdio.h>
#include <conio.h>

/*
DMA

#include<stdlib.h>
int main()
{
    int *p,n,i,l,s;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>l)
        l=*(p+i);
        if((*p+i)<s)
        s=*(p+i);
    }
    printf("Largest=%d\t Smallest=%d",l,s);
    free(p);
    getch();
    return 0;
}
*/

int main()
{
    int *p,a[5],i,l,s;
    p=a;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        if(*(p+i)>l)
        l=*(p+i);
        if(*(p+i)<s)
        s=*(p+i);
    }
    printf("Largest=%d\t Smallest=%d",l,s);
    return 0;
}