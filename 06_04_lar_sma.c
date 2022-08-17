//06_04_WAP to find largest and smallest element in an array

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5],i,l,s,t;
    printf("Enter the elements in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        l=a[i];
        if(a[i]<s)
        s=a[i];
    }
    printf("Largest=%d\t Smallest=%d\n",l,s);
    getch();
    return 0;
}