//02_01_print_num_separately
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a 3 digit no.:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    d=a/10;
    printf("The numbers are %d, %d and %d",b,c,d);
    getch();
    return 0;
}