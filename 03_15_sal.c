/*03_15_WAP to read Annual Salary of an employee and decide tax withheld as follows: 
Salary tax
Up to 100000 0%
Up to 150000 15%
Above 150000 25%
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int sal;
    printf("Enter salary of employee:");
    scanf("%d",&sal);
    if(sal>150000)
    {
        printf("Tax= Rs. %d",25*sal/100);
    }
    else if(sal>100000&&sal<150000)
    {
        printf("Tax=Rs. %d",15*sal/100);
    }
    else if(sal<=100000)
    {
        printf("Tax=Rs. 0");
    }
    getch();
    return 0;
}