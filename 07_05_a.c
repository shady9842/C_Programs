//07_05_a_WAP to sort n numbers in ascending order using pointer

#include <stdio.h>
#include <conio.h>
int main()
{
    int *p,a[10],i,j,t,n;
    printf("Enter a number(1-10):\n");
    scanf("%d",&n);
    p=a;
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("In ascending order:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    getch();
    return 0;
}