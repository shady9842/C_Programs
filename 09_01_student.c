//1.WAP to read a record of a person & display it.Include: Name,age,roll no,address,marks of 5 subjects.

#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25],address[25];
    int age,rno,marks[5];
}s;
int main()
{
    int i;
    printf("Enter the name,age,roll no. and address:\n");
    scanf("%s%d%d%s",&s.name,&s.age,&s.rno,&s.address);
    printf("Enter  marks of five subjects:\n");
    for(i=0;i<5;i++)
        scanf("%d",&s.marks[i]);
    printf("Name\t Age\t Roll No.\t Address\n");
    printf("%s\t %d\t %d\t \t %s\n",s.name,s.age,s.rno,s.address);
    printf("Marks\n");
    for(i=0;i<5;i++)
        printf("%4d\n",s.marks[i]);
    getch();
    return 0;
}