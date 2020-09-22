#include<stdio.h>
#include<conio.h>

int Capital_Count(char*);

int main()
{
    char cSrc[20]="";
    int C_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String:");
    gets(cSrc);

    C_Count=Capital_Count(cSrc);

    printf("\n\t Count Of Capital Letters in Given String is = %d.",C_Count);
    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Capital_Count(char*Str)
{
    int i=0,Cap_Count=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='A' && Str[i]<='Z')
        {
            Cap_Count++;
        }
        i++;
    }
    return Cap_Count;
}

