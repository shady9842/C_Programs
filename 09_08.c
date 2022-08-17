//8.WAP to read record of 5 employee & print the record of person which have highest & lowest salary.(Include:name,salary,address)

#include <stdio.h>
#include <conio.h>
#include<string.h>
struct employee{
    int sal;
    char name[25],add[25];
}e[5];

int main()
{
    int i,j,maxsal,minsal;
    char maxname[25],minname[25],maxadd[25],minadd[25];
    printf("Enter the name, address and salary of five employees:\n");
    for(i=0;i<5;i++)
        scanf("%s%s%d",&e[i].name,&e[i].add,&e[i].sal);
    maxsal=minsal=e[0].sal;
    strcpy(maxname,e[0].name);
    strcpy(maxadd,e[0].add);
    strcpy(minname,e[0].name);
    strcpy(minadd,e[0].add);
    for(i=0;i<5;i++)
    {
        if(maxsal<e[i].sal)
        {
            strcpy(maxname,e[i].name);
            strcpy(maxadd,e[i].add);
            maxsal=e[i].sal;
        }
        if(minsal>e[i].sal)
        {
            strcpy(minname,e[i].name);
            strcpy(minadd,e[i].add);
            minsal=e[i].sal;
        }
    }
    printf("Highest Salary:\n");
    printf("Name=%s\t Address=%s\t Salary=%d\n",maxname,maxadd,maxsal);
    printf("Lowest Salary:\n");
    printf("Name=%s\t Address=%s\t Salary=%d\n",minname,minadd,minsal);
    getch();
    return 0;
}