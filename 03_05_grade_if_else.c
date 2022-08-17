#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the marks of your subject(1-100):");
    scanf("%d",&a);
    if(a>=80)
    printf("Grade = A");
    else if(a>=60)
    printf("Grade = B");
    else if(a>=50)
    printf("Grade = C");
    else if(a>=40)
    printf("Grade = D");
    else
    printf("Grade = F");
    getch();
    return 0;
}