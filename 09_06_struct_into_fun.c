//6.WAP to pass a structure to a function.

#include <stdio.h>
#include <conio.h>
struct fun{
    int a,b;
}f;
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    printf("Enter two numbers:\n");
    scanf("%d%d",&f.a,&f.b);
    printf("sum=%d",sum(f.a,f.b));
    getch();
    return 0;
}