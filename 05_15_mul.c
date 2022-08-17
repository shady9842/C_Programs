//05_15_WAP that calls a function whose name is mul(). This function takes one argument(x) and prints the multiplication table of that no.

#include <stdio.h>
#include <conio.h>
void mul(int x)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    mul(x);
    getch();
    return 0;
}