#include <stdio.h>
#include <stdlib.h>

/*
// Stage 0
// 27.) Harshad number or not

A Harshad number (also known as a Niven number) is an integer that is divisible by the sum of its digits.
For example, the number 18 is a Harshad number because the sum of its digits (1 + 8) equals 9, and 18 is divisible by 9.
*/

int main()
{
    int num,org,rem,sum=0;
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if(org%sum==0)
    {
        printf("\n%d is a Harshad number",org);
    }
    else
    {
        printf("\n%d is not a Harshad number",org);
    }
    return 0;
}
