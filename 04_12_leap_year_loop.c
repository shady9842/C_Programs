#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for(i=1900;i<=2000;i++)
    {
	if(i%4==0)
    	printf("%d\n",i);
	}
    getch();
    return 0;
}