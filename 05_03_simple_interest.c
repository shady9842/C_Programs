//05_03_WAP that calls a function named interest(). This function takes the values of principal, number of years and rate of interest as argument and returns the calculated interest.

#include <stdio.h>
#include <conio.h>
int interest(int p,int t,int r)
{
    int si;
    si=(p*t*r)/100;
    printf("Simple Interest=%d",si);
    return si;
}

int main()
{
    int p,t,r;
    printf("Enter the principle,time and rate:");
    scanf("%d%d%d",&p,&t,&r);
    interest(p,t,r);
    getch();
    return 0;
}