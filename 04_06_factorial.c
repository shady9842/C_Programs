#include <stdio.h>
#include <conio.h>
int main()
{
	int k,n,fac=1;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(k=1; k<=n; k++)
		{
			fac=fac*k;	
		}	
	printf("factorial=%d",fac);
    getch();
    return 0;
}