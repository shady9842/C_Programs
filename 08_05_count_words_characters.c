//WAP to read a line of text & count the no. of words & characters in the line

#include <stdio.h>
#include <conio.h>
int main()
{
    char line[100];
    int w=0,i;
    printf("Enter a line of text:\n");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]==' ')
        w++;
    }
    printf("Characters=%d\t Words=%d",i,w+1);
    getch();
    return 0;
}