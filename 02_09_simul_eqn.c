#include <stdio.h>
#include <conio.h>
int main()
{
    int a1,b1,c1,a2,b2,c2;
    float x,y;
    printf("Enter a1,b1 and c1:");
    scanf("%d%d%d",&a1,&b1,&c1);
    printf("Enter a2,b2 and c2:");
    scanf("%d%d%d",&a1,&b2,&c2);
    x=(b2*c1-b1*c2)/(b2*a1-a2*b1);
    y=(c2*a1-c1*a2)/(b2*a1-a2*b1);
    printf("Answer is\t x=%f y=%f",x,y);
    getch();
    return 0;
}