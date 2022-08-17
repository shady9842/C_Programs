//06_10_WAP that reads two matrices of size N*N and prints the product of those matrices
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;
    printf("Enter the size of matrix:\n");
    scanf("%d",&n);
    printf("Enter the elements of A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the elements of B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Product:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}