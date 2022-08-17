//9.WAP to read a line of text & print each character of the text in reverse case. i.e. print lowercase if it is in uppercase & viceversa.

#include <stdio.h>
#include <conio.h>
int main()
{
    char line[100];
    int i;
    printf("Enter a line of text:\n");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]>='a'&&line[i]<='z')
            line[i]=line[i]-32;
        else if(line[i]>='A'&&line[i]<='Z')
            line[i]=line[i]+32;
    }
    printf("Output:\n %s",line);
    getch();
    return 0;
}