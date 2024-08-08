#include <stdio.h>
#include <stdlib.h>

//Stage 0
//2.) A character is an alphabet or not & 3.) Ascii values of a character

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("%c is an Alphabet and it`s ASCII value is %d .",ch,ch);
    }
    else
    {
        printf("%c is not an alphabet and it`s ASCII value is %d .",ch,ch);
    }
    return 0;
}
