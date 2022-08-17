#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,x,y,ans=1;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    while(i<=y)
    {
        ans=ans*x;
        i++;
    }
    printf("Answer=%d",ans);
    getch();
    return 0;
}