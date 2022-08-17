//14.WAP to read a line of text & print each character,print in reverse case (use toupper() & tolower(),<ctype.h>)

#include <stdio.h>
#include <conio.h>
#include<ctype.h>
int main()
{
    char txt[25];
    int i;
    printf("Enter a line of text:\n");
    gets(txt);
    printf("Reverse Case of each character:\n");
    i=0;
    do{
        if(txt[i]>='a'&&txt[i]<='z')
            txt[i]=toupper(txt[i]);
        else if(txt[i]>='A'&&txt[i]<='Z')
            txt[i]=tolower(txt[i]);
        printf("%c\t",txt[i]);
        i++;
    }while(txt[i]!='\0');
    getch();
    return 0;
}