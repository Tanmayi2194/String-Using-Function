#include<stdio.h>
#include<conio.h>

int Form_Number(char*,int);

int main()
{
    char cSrc[20]="";
    int Number=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String:");
    gets(cSrc);

    Number=Form_Number(cSrc,Number);

    printf("\n\t Count Of Capital Letters in Given String is = %d.",Number);
    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Form_Number(char*Str,int Num)
{
    int i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='0' && Str[i]<='9')
        {
            Num=(Num*10)+(Str[i]-40);
        }
        i++;
    }
    return Num;
}

