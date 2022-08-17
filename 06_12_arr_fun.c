//06_12_WAP to read arry of 10 no.s and display it using array and function
#include <stdio.h>
#include <conio.h>
void array(int a[10])
{
    int i;
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
}
int main()
{
    int i,a[10];
    printf("Enter the elements in array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    array(a);
    getch();
    return 0;
}