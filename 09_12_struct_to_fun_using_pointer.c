//12..WAP to pass structure to function using pointer
#include <stdio.h>
#include <conio.h>
void ptr(int *x,int *y)
{
    *x=*x+*y;
}
struct details{
    int a,b;
    char name[25];
}d;
int main()
{
    int t;
    printf("Enter name and salary of two months:\n");
    scanf("%s%d%d",&d.name,&d.a,&d.b);
    t=d.a;
    ptr(&d.a,&d.b);
    printf("Name=%s\n First Month Salary=%d\n second Month Salary=%d\n Total Salary=%d",d.name,t,d.b,d.a);    
    getch();
    return 0;
}