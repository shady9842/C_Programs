//06_01_WAP to enter values in array called myarray of size 15 and display the elements of array

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,myarray[15];
    printf("Enter the values in array:\n");
    for(i=0;i<15;i++)
        scanf("%d",&myarray[i]);
    for(i=0;i<15;i++)
        printf("\n%4d",myarray[i]);
    getch();
    return 0;
}