/*03_09_A program should be able to calculate sum, difference, product, division of two numbers. Your program should 
display the list of options from which user selects one of them. (Use switch case)a. Add b. Subtract c. Product d. Division
Enter your choice: */

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,a,b;
    printf("\n 1.Add\n 2.Subtract\n 3.Product\n 4.Division\n");
    printf("Enter your choice:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Sum=%d",a+b);
            break;
        }
        case 2:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Difference=%d",a-b);
            break;
        }
        case 3:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Product=%d",a*b);
            break;
        }
        case 4:
        {
            printf("Enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Division=%d",a/b);
            break;
        }
    }
    getch();
    return 0;
}