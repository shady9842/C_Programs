#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,p=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n==0||n==1)
        p=1;
    for(i=2;i<n;i++)
    {
        
        if(n%i==0)
            p=1;
    }
    if(p==0)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    getch();
    return 0;
}