#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even");
    else
        printf("odd");    
    getch();
    return 0;
}