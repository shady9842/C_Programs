//06_05_WAP to print Fibonacci series

#include <stdio.h>
#include <conio.h>
int main()
{
    int fib[10],i,n;
    printf("Enter n(1-10):");
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=0;i<n;i++)
    {
        fib[i+2]=fib[i]+fib[i+1];
        printf("%d\t",fib[i]);
    }
    getch();
    return 0;
}