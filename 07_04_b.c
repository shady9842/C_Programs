//07_04_b_WAP to find second and third largest number using pointer

#include <stdio.h>
#include <conio.h>
int main()
{
    int *p,i,j,a[5],t,sl,tl;
    p=a;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(p+i)<*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    
    printf("Second Largest=%d\t Third Largest=%d",*(p+1),*(p+2));
    getch();
    return 0;
}