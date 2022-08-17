//06_03_WAP to add two arrays and put in third array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter the elements of first array:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements of second array:\n");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    printf("Sum of arrays:\n");
    for(i=0;i<5;i++)
    {
    c[i]=a[i]+b[i];
    printf("%d\t",c[i]);
    }
    getch();
    return 0;
}