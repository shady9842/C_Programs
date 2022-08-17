#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,sum=1;
    do
    {
        i=i+2;
        sum=sum+i;  
    }while (i<99);
        printf("sum=%d",sum);
    getch();
    return 0;
}