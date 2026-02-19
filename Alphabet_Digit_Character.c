#include<stdio.h>
int main()
{   
    char s;
    printf("Enter a symbol");
    scanf("%c",&s);
    if(s>=65 && s<=90 && s>=97 && s<=122)
    {
        printf("The entered symbol is a letter");
    }
    else if(s>=48 && s<=57)
    {
        printf("The entered symbol is digit");
    }
    else if(s>=32 && s<=91)
    {   
        printf("The entered symbol is a character");
    }
    else
    {   printf("Incorret Input");
    }
}
