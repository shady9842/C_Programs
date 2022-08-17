/*05_17_WAP that use function swap two given values. The swap() should returns nothing (void). Hint:
use 
(a)call by value and 
(b) call by reference
*/
#include <stdio.h>
#include <conio.h>

/*
call by value
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping a=%d\t b=%d",a,b);
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    getch();
    return 0;
}*/

/*call by reference*/
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a=%d\t b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d\t b=%d",a,b);
    getch();
    return 0;
}