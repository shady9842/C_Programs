//05_05_WAP to read l,b,h of a rectangle and print its volume using all four category of function
#include <stdio.h>
#include <conio.h>

/*no argument and no return type
void volume()
{
    int l,b,h;
    printf("Enter the length, breadth and height of cuboid:");
    scanf("%d%d%d",&l,&b,&h);
    printf("volume of cuboid=%d",l*b*h);
}
void main()
{
    volume();
    getch();
}*/

/*argument and no return type
void volume(int x,int y,int z)
{
    printf("volume of cuboid=%d",x*y*z);
}
void main()
{
    int l,b,h;
    printf("Enter the length, breadth and height of cuboid:");
    scanf("%d%d%d",&l,&b,&h);
    volume(l,b,h);
    getch();
}*/

/*argument and return type
int volume(int x,int y,int z)
{
    int v;
    v=x*y*z;
    printf("volume of cuboid=%d",v);
    return v;
}
void main()
{
    int l,b,h;
    printf("Enter the length, breadth and height of cuboid:");
    scanf("%d%d%d",&l,&b,&h);
    volume(l,b,h);
    getch();
}*/

//no argument and return type
int volume()
{
    int l,b,h,v;
    printf("Enter the length, breadth and height of cuboid:");
    scanf("%d%d%d",&l,&b,&h);
    v=l*b*h;
    printf("volume of cuboid=%d",v);
    return v;
}
void main()
{
    volume();
    getch();
}

