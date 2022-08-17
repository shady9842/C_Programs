//07_14_WAP to read an array of integers and print its element in reverse order.

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,a[10],*p;
    p=a;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&*(p+i));
    printf("\n In reverse order:\n");
    for(i=9;i>=0;i--)
        printf("%d\t",a[i]);
    getch();
    return 0;
}