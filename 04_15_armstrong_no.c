#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,sum,num;
    printf("The armstrong numbers between 100 and 500 are:\n");
    for(i=100;i<500;i++)
    {
        sum=0;
        num=i;
        k=num;
        while(num!=0)
        {
            j=num%10;
            sum=sum+j*j*j;
            num=num/10;
        }
        if(sum==k)
        printf("%d\t",k);
    }
    getch();
    return 0;
}   