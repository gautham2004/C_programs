#include <stdio.h>
#include <stdlib.h>

//Stage 0
// 17.) Reverse of a given number

int main()
{
    int num,org,rem;
    int rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse of %d is %d",org,rev);
    return 0;
}
