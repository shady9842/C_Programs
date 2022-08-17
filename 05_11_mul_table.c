//05_11_WAP to read a no. n and print its multiplication table using function(mul)
#include <stdio.h>
#include <conio.h>
void mul(int n)
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",n,i,n*i);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    mul(n);
    getch();
    return 0;
}