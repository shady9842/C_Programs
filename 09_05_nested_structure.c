/*5.WAP to make nested structure.put a structure(date of birth) within structure record.*/

#include <stdio.h>
#include <conio.h>
struct record
{
    int sn;
    char name[25];
    struct dob{
        int b;
    }d;
}r;

int main()
{
    printf("Enter SN, Name and Date of birth:\n");
    scanf("%d%s%d",&r.sn,&r.name,&r.d.b);
    printf("SN=%d\n Name=%s\n Date of birth=%d",r.sn,r.name,r.d.b);
    getch();
    return 0;
}
