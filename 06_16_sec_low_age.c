//06_16_WAP to read age of 'n' students and display the second lowest age

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[20],n,i,j,t;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter age of %d students:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
    }
    printf("Second Lowest Age=%d",a[1]);
    getch();
    return 0;
}