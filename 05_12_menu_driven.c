/*05_12_Write a menu driven program and perform the following operation:
a) reverse the number.
b) to find if given no. is prime or not.
c) to get the sum of digit of a given no.
d) to find if the given no. is palindrome or not.
*/
#include <stdio.h>
#include <conio.h>
void rev()
{
    int num,revnum;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        revnum=revnum*10;
        revnum=revnum+num%10;
        num=num/10;
    }
    printf("Reverse number=%d",revnum);
}

void prime()
{
    int i,num,p=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0||num==1)
    p=1;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        p=1;
    }
    if(p==0)
    printf("%d is prime number",num);
    else
    printf("%d is not prime number",num);
}

void sum()
{
    int num,s=0,a;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        s=s+a;
        num=num/10;
    }
    printf("Sum=%d",s);
}
void palin()
{
    int num,revnum,a;
    printf("Enter a number:");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        revnum=revnum*10;
        revnum=revnum+num%10;
        num=num/10;
    }
    if(a==revnum)
    printf("Palindrome");
    else
    printf("Not palindrome");
}
int main()
{
    int n;
    printf("Select the operation to be performed:\n");
    printf(" 1.Reverse the number:\n 2.To find if the given number is prime or not:\n 3.To get the sum of digits of given no.:\n 4.To find if the given no. is plaindrome or not:\n");
    scanf("%d",&n);
    if(n==1)
    {
        rev();
    }
    else if(n==2)
    {
        prime();
    }
    else if(n==3)
    {
        sum();
    }
    else if(n==4)
    {
        palin();
    }
    else
    {
    printf("Invalid input");
    }
    getch();
    return 0;
}