#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float dist;
    printf("Enter x1 and y1:");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2 and y2:");
    scanf("%d%d",&x2,&y2);
    dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance=%f",dist);
    getch();
    return 0;
}