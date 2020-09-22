
#include<stdio.h>
#include<conio.h>

int White_Space_Count(char*);

int main()
{
    char cSrc[20]={'\0'};
    int Space_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String =");
    gets(cSrc);

    Space_Count=White_Space_Count(cSrc);

    printf("\n\t Count Of White Spaces in Given String is = %d.",Space_Count);
    printf("\n\n..........................***Thanks***........................................");
    getch();
    return 0;
}

int White_Space_Count(char*Str)
{
    int i=0,S_Cnt=0;

    while(Str[i]!='\0')
    {
       if(Str[i]==' ')
        {
            S_Cnt++;
        }
       i++;
    }
    return S_Cnt;
}
