/*05_02_WAP that calls a function called getarea(). This function is responsible for reading two integer 
numbers(length and breadth) and print the area of rectangle.
a. Argument and no return type.
b. Argument and return type.*/

/*
Argument and no return type

#include <stdio.h>
#include <conio.h>
void getarea(int x,int y)
{
    printf("The area of given rectangle is:%d",x*y);
}
int main()
{
    int b,c;
    printf("Enter the value of b and c:");
    scanf("%d%d",&b,&c);
    getarea(b,c);
    getch();
    return 0;
}
*/

//Argument and return type
#include <stdio.h>
#include <conio.h>
int getarea(int x,int y)
{
    printf("The area of given rectangle is:%d",x*y);
    return x*y;
}
int main()
{
    int b,c;
    printf("Enter the value of b and c:");
    scanf("%d%d",&b,&c);
    getarea(b,c);
    getch();
    return 0;
}