#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a year:");
    scanf("%d",&n);
    if(n%4==0&&n%400==0||n%100!=0)
    printf("Leap year");
    else
    printf("Not leap year");
    getch();
    return 0;
}