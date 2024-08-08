#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Stage 0
//1.) A character is a vowel or consonant

int main()
{
    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a vowel.",ch);
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel.",ch);
    }
    else
    {
        printf("%c is a consonant.",ch);
    }
    return 0;
}
