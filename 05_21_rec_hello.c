//05_21_WAP to print “Hello” „n‟ times using recursive function
#include <stdio.h>
#include <conio.h>
int hell(int n)
{
    if(n>=1)
    {
    printf("Hello\n");
    hell(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    hell(n);
    getch();
    return 0;
}