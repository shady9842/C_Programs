#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("greatest=%d",a):(b>a&&b>c)?printf("Greatest=%d",b):printf("Greatest=%d",c);
    getch();
    return 0;
}