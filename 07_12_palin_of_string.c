//07_12_WAP a program to check palindrome of string using pointer

#include <stdio.h>
#include<string.h>
#include <conio.h>
int main()
{
    char i,j,ch[15],t[15],*p;
    p=ch;
    printf("Enter the string:\n");
    scanf("%s",&ch);
    i=0;
    while(*(p+i)!='\0')
    {
        t[i]=*(p+i);
        i++;
    }
    j=i-1;
    i=0;
    while(t[i]!='\0')
    {
        *(p+j)=t[i];
        i++;
        j--;
    }
    if(strcmp(ch,t)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    getch();
    return 0;
}