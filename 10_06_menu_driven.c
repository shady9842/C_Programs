//6.WAP to make menu-based program using file to append and read data in file. Use switch for append,read.

#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
void append()
{
    char ch[100];
    FILE *FP;
    printf("Enter the data to append:\n");
    fflush(stdin);
    fgets(ch,100,stdin);
    FP=fopen("10_06_MenuDriven.txt","a");
    fprintf(FP," %s",ch);
    fclose(FP);
}
void read()
{
    char ch[100];
    FILE *FP;
    printf("The data in the file is:\n");
    printf("\n");
    FP=fopen("10_06_MenuDriven.txt","r");
     while (fgets(ch, 100, FP) != NULL) {
        printf("%s", ch);
    }    
}
void main()
{
    int n;
    printf(" 1. Append Data\n 2. Read Data\n");
    printf("Select the operation to perform:\n");
    scanf("%d",&n);
    printf("\n");
    switch(n)
    {
        case 1:
        {
            append();
            break;
        }
        case 2:
        {
            read();
            break;
        }
        default:
        {
            printf("Invalid Input");
        }

    }
    getch();
}
