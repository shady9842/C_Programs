#include <stdio.h>
#include <conio.h>
int main()
{
    int a=0,b=1,c,i,num;
    printf("Enter the number for fibonacci series:");
    scanf("%d",&num);
    printf("Fibonacci series for given number is:\n");
    printf("%d\n %d\n",a,b);
    for(i=2;i<num;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    getch();
    return 0;
}