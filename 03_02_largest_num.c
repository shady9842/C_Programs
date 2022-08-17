#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,great;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    great=a>b&&a>c?a:b>a&&b>c?b:c;
    printf("Greatest=%d",great);
    getch();
    return 0;
}