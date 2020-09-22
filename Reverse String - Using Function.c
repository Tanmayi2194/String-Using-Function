#include<stdio.h>
#include<conio.h>

void Reverse_String(char*,char*);

int main()
{
    char cSrc[20]="",cDest[20]="";

    printf("\nEnter a String:");
    gets(cSrc);

    Reverse_String(cSrc,cDest);

    printf("\nSource String is: %s",cSrc);
    printf("\nReverse String is: %s",cDest);

    getch();
    return 0;
}

void Reverse_String(char*instr,char*outstr)
{
    int i=0,j=0;
    while(instr[i]!='\0')
    {
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        outstr[j]=instr[i];
        j++;
        i--;
    }
    outstr[j]='\0';
    return;
}
