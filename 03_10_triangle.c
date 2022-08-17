#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,x,y,z;
    printf("Enter the three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    x=a*a;
    y=b*b;
    z=c*c;
    if(b+c>a||a+b>c||a+c>b)
    {
        printf("It is a triangle.\n");
        if(a==b||b==c||c==a)
        {
            printf("Isosceles Triangle");
        }
        else if(a==b&&b==c) 
        {
            printf("Equilateral Triangle");
        }
        else if(x==y+z||y==x+z||z==y+x)
        {
            printf("Right angled Triangle");
        }
        
    }
    else
    {
        printf("The triangle is invalid");
    }
    getch();
    return 0;
}