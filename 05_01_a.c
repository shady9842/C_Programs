//05_01_a_WAP to read a number n and calculate its cube using no argument and no return type function

#include <stdio.h>
void cube()
{
        int n;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("The cube of the given no. is %d",n*n*n);
}
void main()
{
    cube();
}