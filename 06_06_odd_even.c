//06_06_WAP to separate odd and even elements of array
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],i;
    printf("Enter the elements in array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Even\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        printf("%d\n",a[i]);
    }
    printf("\n Odd\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        printf("%d\n",a[i]);
    }
    getch();
    return 0;
}