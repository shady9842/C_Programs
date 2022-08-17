//07_10_WAP to read two matrix of(size 3*3),add it and store in 3rd marix using pointer& function.

#include <stdio.h>
#include <conio.h>
void sum(int a[][3],int b[][3],int c[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)**(*(b+i)+j);
            printf("%d\t",*(*(c+i)+j));
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,*p,*q,*r;
    p=&a[0][0],q=&b[0][0],r=&c[0][0];
    printf("\nEnter the elements of matrix A:\n");
     for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
            scanf("%d",&*(*(a+i)+j));
    }
     printf("\nEnter the elements of matrix B:\n");
     for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
            scanf("%d",&*(*(b+i)+j));
    }
    sum(a,b,c);
    getch();
    return 0;
}