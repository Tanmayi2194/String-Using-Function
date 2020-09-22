#include<stdio.h>
#include<conio.h>

int Small_Letter_Count(char*);

int main()
{
    char cSrc[20]="";
    int S_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String:");
    gets(cSrc);

    S_Count=Small_Letter_Count(cSrc);

    printf("\n\t Count Of Small Letter in Given String is = %d.",S_Count);
    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Small_Letter_Count(char*Str)
{
    int i=0,Small_Count=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='a' && Str[i]<='z')
        {
            Small_Count++;
        }
        i++;
    }
    return Small_Count;
}


