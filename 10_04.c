//4.WAP to copy characters from one file to another file.

#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
void main()
{
    char ch;
    FILE *FP1,*FP2;
    FP1=(fopen("10_04_source.txt","r"));
    if(FP1==NULL)
        printf("Source.txt doesnot exist.\n");
    else
    {
        FP2=fopen("10_04_destination.txt","w");
        while(fscanf(FP1,"%c",&ch)!=EOF)
            fprintf(FP2,"%c",ch);
        fclose(FP1);
        fclose(FP2);
        printf("\n Character copied from source file to destination file.");
    }
}