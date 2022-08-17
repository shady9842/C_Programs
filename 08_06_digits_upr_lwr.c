//6.WAP to read a line of text & count the no. of digits,uppercase & lowercase characters in the line.

#include <stdio.h>
#include <conio.h>
int main()
{
    char txt[50];
    int i,d=0,u=0,l=0;
    printf("Enter a line of text:\n");
    gets(txt);
    for(i=0;txt[i]!='\0';i++)
    {
        if(txt[i]>='a'&&txt[i]<='z')
            l++;
        else if(txt[i]>='A'&&txt[i]<='Z')
            u++;
        else if(txt[i]>='0'&&txt[i]<='9')
            d++;
    }
    printf("Digits=%d\t Uppercase Characters=%d\t Lowercase Characters=%d",d,u,l);
    getch();
    return 0;
}