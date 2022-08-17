//8.WAP to sort an array of string.

#include<string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[25][5],temp[25];
    int i,j;
    printf("Enter 5 strings:\n");
    for(i=0;i<5;i++)
        gets(str[i]);
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("In alphabetical order:\n");
    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
    getch();
    return 0;
}