//05_09_WAP to read a no. n from user and print your name n times using function
#include <stdio.h>
#include <conio.h>
int name(int n,char c[15])
{
   if(n==0)
   return 0;
   else
   {
    printf("%s\n",c);
    return name(n-1,c);
   }
}
int main()
{
    int n;
    char c[15];
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the name to be repeated:");
    scanf("%s",&c);
    name(n,c);
    getch();
    return 0;
}