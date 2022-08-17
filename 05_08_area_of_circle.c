//05_08_WAP that calls a function named as area(). This function takes the radius of the circle and returns the area of the circle
#include <stdio.h>
#include <conio.h>
int area(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}
void main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    printf("Area=%d",area(r));
    getch();
}