//06_11_WAP that reads a matrix and identify if the given matrix is symmetric or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n,c=0;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]!=a[i][j])
            {
                c++;
                break;
            }
        }
    }
    if(c==0)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");
    getch();
    return 0;
}