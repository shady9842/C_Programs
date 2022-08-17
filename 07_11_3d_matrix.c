//07_11_WAP to read 3D-array of size 2*2*2 and print it

#include <stdio.h>
#include <conio.h>
int main()
{
    int (*p)[2][2],a[2][2][2],i,j,k;
    p=a;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&*(*(*(p+i)+j)+k));
            }
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",*(*(*(p+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    getch();
    return 0;
}