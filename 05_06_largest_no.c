//05_06_WAP to read two no. and print the largest no. using function
#include <stdio.h>
#include <conio.h>

/*
int largest()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d is the largest",a):printf("%d is the largest",b);
    return 0;
}
int main()
{
    largest();
    getch();
    return 0;
}*/

int largest(int a,int b)
{
    if(a>b)
    return 1;
    else
    return 0;
}

int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=largest(a,b);
    if(c==1)
    printf("%d is the largest",a);
    else if(c==0)
    printf("%d is the largest",b);
    getch();
    return 0;
}