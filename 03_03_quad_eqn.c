#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2,rp,ip;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("The roots are real.\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are r1=%.2f\t r2=%.2f",r1,r2);
    }
    else if(d==0)
    {
        printf("The roots are real and equal.\n");
        r1=r2=-b/(2*a);
        printf("Roots are r1=r2=%.2f",r1);
    }
    else
    {
        printf("The roots are imaginary.\n");
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("Roots are \n root1=%.2f+%.2fi \n root2=%.2f-%.2fi",rp,ip,rp,ip);
    }
    getch();
    return 0;
}