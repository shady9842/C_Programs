//06_17_WAP to find transpose of 2d matrix
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter the elements of 3*3 matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}