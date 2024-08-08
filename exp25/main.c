#include <stdio.h>
#include <stdlib.h>

// Stage 0
//24.) Strong number or not
int main()
{
    int fact=1,num,i,rem,org,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        rem=num%10;
        i=rem;
            while(i>0)
            {
                fact=fact*i;
                i--;
            }
        sum=sum+fact;
        fact=1;
        num=num/10;
    }
    if(org==sum)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }
    return 0;
}
