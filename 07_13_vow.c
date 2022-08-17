//07_13_WAP to count vowels and consonants in a line of text using pointer

#include <stdio.h>
#include <conio.h>
int main()
{
    char text[100],*p;
    int vow,cons;
    p=text;
    vow=cons=0;
    printf("Enter a line of text:\n");
    fgets(text, 100, stdin);
    while(*p!='\0')
    {
        if(*p=='a'||*p=='A'||*p=='e'||*p=='E'||*p=='i'||*p=='I'||*p=='o'||*p=='O'||*p=='u'||*p=='U')
            vow++;
        else if(*p>='a'&&*p>='z'||*p>='A'&&*p>='Z')
        cons++;
        p++;
    }
    printf("Vowels=%d\t Consonants=%d",vow,cons);
    getch();
    return 0;
}