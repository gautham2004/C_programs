#include <stdio.h>
#include <stdlib.h>


//17.) Reverse of a given number
int main()
{
    int num;
    int rev=0,rem=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}
