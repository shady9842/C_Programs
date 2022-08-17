//05_13_WAP that calls a function whose name is power(). This function takes two arguments(x and y) and returns the value of x to the power y.

#include <stdio.h>
#include<math.h>
#include <conio.h>
int power(int x,int y)
{
    int p;
    p=pow(x,y);
    return p;
}
int main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("%d",power(x,y));
    getch();
    return 0;
}