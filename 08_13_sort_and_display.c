//13.WAP to read name of 10 persons,sort it & display it.

#include <stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
    char name[25][10],t[25];
    int i,j;
    printf("Enter the name of 10 persons:\n");
    for(i=0;i<10;i++)
        gets(name[i]);
    for(i=0;i<10;i++)
        for(j=i+1;j<10;j++)
            {
                if(strcmp(name[i],name[j])>0)
                {
                    strcpy(t,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],t);
                }
            }
    printf("After sorting:\n");
    for(i=0;i<10;i++)
        printf("%s\n",name[i]);
    getch();
    return 0;
}