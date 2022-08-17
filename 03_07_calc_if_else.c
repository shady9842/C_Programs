#include <stdio.h>
#include <conio.h>
int main()
{
    int n,a,b;
    printf("1. Addition\n 2. Subtraction\n 3. Multplication\n 4. Division\n");
    printf("Enter your choice(1-4):");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Sum=%d",a+b);
    }
    else if(n==2)
    {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Diff=%d",a-b);
    }
    else if(n==3)
    {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Product=%d",a*b);
    }
    else
    {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("Division=%d",a+b);
    }
    getch();
    return 0;
}