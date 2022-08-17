#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     if(a>b && a>c && a>d && a>e)
    {
        printf("%d is the greatest",a);
    }
    else if(b>c && b>d && b>e){
        printf("%d is the greatest",b);
    } 
    else if(c>d && c>e) {
        printf("%d is the greatest",c);
    } 
    else if(d>e){
        printf("%d is the greatest",d);
    }
    else {
        printf("%d is the greatest",e);
    } 
    getch();
    return 0;
}