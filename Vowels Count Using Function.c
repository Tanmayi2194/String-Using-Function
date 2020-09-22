
#include<stdio.h>
#include<conio.h>

int Vowel_Count(char*);

int main()
{
    char cSrc[20]={'\0'};
    int V_Count=0;

    printf("\n..............................................................................");
    printf("\n\n\t Enter a String =");
    gets(cSrc);

    V_Count=Vowel_Count(cSrc);

    printf("\n\t Count Of Vowels in Given String is = %d.",V_Count);
    printf("\n\n..........................***Thanks***........................................");
    getch();
    return 0;
}

int Vowel_Count(char* Str)
{
    int i=0,V_Cnt=0;

    while(Str[i]!='\0')
    {
       if(Str[i]=='a'||Str[i]=='e'||Str[i]=='i'||Str[i]=='o'||Str[i]=='u'||Str[i]=='A'||Str[i]=='E'||Str[i]=='I'||Str[i]=='O'||Str[i]=='U')
        {
            V_Cnt++;
        }
       i++;
    }
    return V_Cnt;
}
