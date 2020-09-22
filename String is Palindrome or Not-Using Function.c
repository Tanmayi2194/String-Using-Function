#include<stdio.h>
#include<conio.h>

int Palindrome(char*);

int main()
{
    int Result=0;
    char cSrc[20]="";

    printf("\n..............................................................................");
    printf("\n\n\t\tEnter a String To Check it is Palindrome Or Not:");
    gets(cSrc);

    Result=Palindrome(cSrc);

    if(Result==1)
    {
        printf("\n\t\t\tGiven String Is Palindrome");
    }
    else
    {
        printf("\n\t\t\tGiven String Is Not Palindrome");
    }

    printf("\n\n..........................***Thanks***........................................");

    getch();
    return 0;
}

int Palindrome(char*Str)
{
    int i=0,j=0;

    while(Str[j]!='\0')
    {
        j++;
    }
    j=j-1;

    while(i<j)
    {
        if(Str[i]!=Str[j])
        {
            break;
        }
        i++;
        j--;
    }

    if(i>=j)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
