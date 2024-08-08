#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Stage 0
//22.) Palindrome or not

int main()
{
    char str[50];
    char rev;
    int i,length,count=0;
    printf("Enter a string:");
    scanf("%s",&str);


    length=strlen(str);

    for(i=0;i<=length;i++)
    {
        if (str[i]!=str[length-i-1])
       {
        count++;
       }
    }
    if(count==0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot palindrome");
    }

    return 0;
}
