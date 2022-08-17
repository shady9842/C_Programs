#include <stdio.h>
#include <conio.h>
int main()
{
    int a,i,j=0;
    printf("Enter the age of twenty persons:");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a);
        if(a>=40&&a<=50)
            j++;
    }
    printf("The no. of people the the age group 50-60 are:");
    printf("%d",j);
    getch();
    return 0;
}