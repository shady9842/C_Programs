//06_14_WAP to read two arrays, add two array and store the result in third array and print it using function
#include <stdio.h>
#include <conio.h>
void sum(int a[10][10],int b[10][10],int n)
{
    int c[10][10],i,j;
    printf("Result:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Enter the elements of array A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of array B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    sum(a,b,n);
    getch();
    return 0;
}