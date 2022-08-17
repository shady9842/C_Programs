//10.WAP to make a record of 5 students using structure array and pointer.

#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25];
    int age,rno;
}s[5],*p;
int main()
{
    int i;
    p=s;
    printf("Enter the name,age,roll no of 5 students:\n");
    for(i=0;i<5;i++)
        scanf("%s%d%d",&(p+i)->name,&(p+i)->age,&(p+i)->rno);
    printf("Name\t Age\t Roll No.\n");
    for(i=0;i<5;i++)
        printf("%s\t %d\t %d\n",(p+i)->name,(p+i)->age,(p+i)->rno);
    getch();
    return 0;
}