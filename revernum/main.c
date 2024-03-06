//reversing number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reverse=0,remainder;
    printf("Enter a integer:");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("reversal of the given number %d",reverse);
    return 0;
}
