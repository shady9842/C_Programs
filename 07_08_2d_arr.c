//07_08_WAP to read 2D-array (size 3*3) using pointer and diaplay it.

#include <stdio.h>
#include <conio.h>
int main()
{
    int (*p)[3],a[3][3],i,j;
    printf("Enter the elements of 3*3 matrix:\n");
    p=a;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d",&*(*(p+i)+j));
        }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }
    getch();
    return 0;
}