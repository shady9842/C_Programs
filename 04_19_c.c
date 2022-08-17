#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2!=0)
            printf("1\t");
            else
            printf("0\t");
        }
        printf("\n");
    }
    getch();
    return 0;
}