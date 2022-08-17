//9.WAP to make a record of a a student using pointer to structure.( p->name,(*p).name)

#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25];
    int age,rno;
}s,*p;
int main()
{
    p=&s;
    printf("Enter the name,age,roll no of student:\n");
    scanf("%s%d%d",&p->name,&p->age,&p->rno);
    printf("Name\t Age\t Roll No.\n");
    printf("%s\t %d\t %d\n",p->name,p->age,p->rno);
    getch();
    return 0;
}