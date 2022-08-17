/*05_14_WAP that use a function called isprime(). This function takes a no. as an argument and returns either 0 or
1. The function returns 1 if the given argument is prime otherwise 0.
*/
#include <stdio.h>
#include <conio.h>
int isprime(int n)
{
    int i;
    if(n==0||n==1)
    return 0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int n,c;
    printf("Enter a number:");
    scanf("%d",&n);
    c=isprime(n);
    if(c==1)
        printf("Prime Number");
    else if(c==0)
        printf("Not Prime Number");
    getch();
    return 0;
}