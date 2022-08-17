#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,p;
    printf("Prime numbers between 1 to 100 are:");
    for(i=2;i<100;i++)
    {
        p=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p)
        printf("%d\n",i);
    }
    getch();
    return 0;
}