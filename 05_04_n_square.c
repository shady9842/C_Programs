//05_04_WAP to read a no. ānā and print its square using function
#include <stdio.h>
#include <conio.h>
void sq(int n)
{
    printf("Square=%d",n*n);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    sq(n);
    getch();
    return 0;
}