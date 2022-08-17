#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,c;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        printf("%d\n",i*i*i);
    }
    getch();
    return 0;
}