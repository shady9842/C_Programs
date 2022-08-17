#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter your number(from 1 to 7):");
    scanf("%d",&a);
    if(a==1)
    printf("Sunday");
    else if(a==2)
    printf("Monday");
    else if(a==3)
    printf("Tuesday");
    else if(a==4)
    printf("Wednesday");
    else if(a==5)
    printf("Thursday");
    else if(a==6)
    printf("Friday");
    else if(a==7)
    printf("Saturday");
    else
    printf("Invalid Input");
    getch();
    return 0;
}