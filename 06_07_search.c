/*06_07_WAP that initialize ten numbers and search the key (a number given by the user)from the list .If the key is found then it displays the index(subscript of an array)otherwise it displays the proper messagei.e. "key is not found"*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],num,i,c=0;
    printf("Enter the elements in array:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter a number to search:\n");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(num==a[i])
        {
        printf("%d is in array",num);
        c++;
        }  
    }
    if(c==0)
        printf("%d is not in array",num);
    getch();
    return 0;
}