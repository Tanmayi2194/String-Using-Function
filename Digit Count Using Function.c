#include<stdio.h>
#include<conio.h>

int Digit_Count(char*);

int main()
{
    char cSrc[20]="";
    int D_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String:");
    gets(cSrc);

    D_Count=Digit_Count(cSrc);

    printf("\n\t Count Of Digits in Given String is = %d.",D_Count);
    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Digit_Count(char*Str)
{
    int i=0,Dig_Count=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='0'&&Str[i]<='9')
        {
            Dig_Count++;
        }
        i++;
    }
    return Dig_Count;
}


