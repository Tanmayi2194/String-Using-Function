#include<stdio.h>
#include<conio.h>

int Special_Char_Count(char*);

int main()
{
    char cSrc[20]="";
    int Special_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String:");
    gets(cSrc);

    Special_Count=Special_Char_Count(cSrc);

    printf("\n\t Count Of Special Character in Given String is = %d.",Special_Count);
    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Special_Char_Count(char*Str)
{
    int i=0,S_Count=0;

    while(Str[i]!='\0')
    {
        if(!(Str[i]>='A' && Str[i]<='z' && Str[i]>='Z' && Str[i]<='z'))
        {
            S_Count++;
        }
        i++;
    }
    return S_Count;
}


