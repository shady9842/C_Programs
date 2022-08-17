/*2.WAP to read a record of 5 students and print the records of student. 
The record should include:Name,Age,Roll no*/

#include <stdio.h>
#include <conio.h>
struct student{
    char name[25];
    int age,rno;
}s[5];
int main()
{
    int i;
    printf("Enter the name,age and roll no. of 5 student:\n");
    for(i=0;i<5;i++)
        scanf("%s%d%d",&s[i].name,&s[i].age,&s[i].rno);
    printf("Name\t Age\t Roll no.\n");
    for(i=0;i<5;i++)
        printf("%s\t %d\t %d\n",s[i].name,s[i].age,s[i].rno);
    getch();
    return 0;
}