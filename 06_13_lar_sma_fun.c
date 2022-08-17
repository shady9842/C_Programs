/*06_13_WAP to read array of 5 no.s and display:
(a) the largest no. using function and array. 
(b) the smallest no. using function and array.*/

#include <stdio.h>
#include <conio.h>
void array(int a[5])
{
    int i,l,s;
    l=a[0];
    s=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        l=a[i];
        if(a[i]<s)
        s=a[i];
    }
    printf("%d=Largest\n %d=Smallest",l,s);
}
int main()
{
    int a[5],i;
    printf("Enter the elements in array:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    array(a);
    getch();
    return 0;
}