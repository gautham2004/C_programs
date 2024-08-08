#include <stdio.h>
#include <stdlib.h>

//Stage 0
//4.) Uppercase, Lowercase or special character


int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("%c is an Uppercase",ch);
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("%c is a Lowercase",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
    return 0;
}
