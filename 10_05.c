//5.WAP to read a simple structure and put it into a file and display on screen.

#include <stdio.h>
#include <conio.h>
struct file{
    int sn,age;
    char name[25];
}f;
int main()
{
    FILE *FP;
    printf("Enter SN, Name and Age:\n");
    scanf("%d%s%d",&f.sn,&f.name,&f.age);
    FP=fopen("10_05_file.txt","w");
    fprintf(FP,"%d\t%s\t%d",f.sn,f.name,f.age);
    fclose(FP);
    fscanf(FP,"%d%s%d",&f.sn,&f.name,&f.age);
    printf("SN\t Name\t Age\n %d\t %s\t %d\n",f.sn,f.name,f.age); 
    getch();
    return 0;
}