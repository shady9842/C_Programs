//05_20_WAP to find the value of x to the power y using recursive function
#include <stdio.h>
#include <conio.h>
int power(int x,int y)
{
    if(y==0)
    return 1;
    else
    return x*power(x,y-1);
}
int main()
{
    int x,y,res;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    res=power(x,y);
    printf("Result=%d",res);
    getch();
    return 0;
}