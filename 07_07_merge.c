//07_07_program to merge two sorted array
#include <stdio.h>
#include <conio.h>
int main()
{
    int a1[5],a2[5],merge[10],*a,*b,*m,i,k;
    printf("Enter 5 elements in A:\n");
    m=merge;
    a=a1;
    for(i=0;i<5;i++)
    {
        scanf("%d",a1+i);
        merge[i]=*(a1+i);
    }
    k=i;
    b=a2;
    printf("Enter 5 elements of B:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",a2+i);
        merge[k]=*(a2+i);
        k++;
    }
    printf("After merging:\n");
    for(i=0;i<k;i++)
        printf("%4d\t",*(merge+i));
    getch();
    return 0;
}