//2.WAP to check if two string are equal or not.(do not use strcmp)
#include <stdio.h>
#include <conio.h>
int main()
{
    char str1[15],str2[15];
    int i=0,j=0;
    printf("Enter two lines of strings:\n");
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
        i++;
    while (str2[j]='\0')
        j++;
    if(i==j)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    getch();
    return 0;
}