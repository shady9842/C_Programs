/*3.WAP to read a record of 5 students and print the records of student according to the roll number (in ascending 
order). The record should include:Name,Age,Roll no.*/

#include <stdio.h>
#include <conio.h>
#include<string.h>
struct student{
    char name[25];
    int age,rno;
}s[5];
int main()
{
    int i,j,tr,ta;
    char st[25];
    printf("Enter the name,age and roll no. of 5 student:\n");
    for(i=0;i<5;i++)
        scanf("%s%d%d",&s[i].name,&s[i].age,&s[i].rno);
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
        {
            if(s[i].rno>s[j].rno)
            {
                tr=s[i].rno;
                s[i].rno=s[j].rno;
                s[j].rno=tr;
                strcpy(st,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,st);
                ta=s[i].age;
                s[i].age=s[j].age;
                s[j].age=ta;
            }
        }
    printf("Name\t Age\t Roll no.\n");
    for(i=0;i<5;i++)
        printf("%s\t %d\t %d\n",s[i].name,s[i].age,s[i].rno);
    getch();
    return 0;
}
