//06_08_WAP to sort the given list of numbers.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],i,j,t;
    printf("Enter the elements in array:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("\n %d",a[i]);
    getch();
    return 0;
}