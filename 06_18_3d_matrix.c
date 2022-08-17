//06_18_WAP to input a 3d matrix and print it
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10][10],i,j,k,n;
    printf("Enter the dimension of 3D matrix:\n");
    scanf("%d",&n);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            scanf("%d",&a[i][j][k]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                printf("%4d\t",a[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    getch();
    return 0;
}