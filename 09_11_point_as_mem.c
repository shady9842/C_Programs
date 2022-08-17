//11.WAP to use pointer as a member of structure.

#include <stdio.h>
#include <conio.h>
struct student{
    char name[25],*p;
}s;
int main()
{
    s.p=s.name;
    printf("Enter the name of student:\n");
    scanf("%s",&s.name);
    printf("Name=%s",s.p);
    getch();
    return 0;
}