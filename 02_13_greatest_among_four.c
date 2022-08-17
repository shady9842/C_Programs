#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c and d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    printf("Greatest=%d",a);
    else if(b>a&&b>c&&b>d)
    printf("Greatest=%d",b);
    else if(c>a&&c>b&&c>d)
    printf("Greatest=%d",c);
    else
    printf("Greatest=%d",d);
    getch();
    return 0;
}