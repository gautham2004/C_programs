#include <stdio.h>
#include <stdlib.h>

//Stage 0
//23.) Armstrong number or not

int main()
{
    int num,org,rem,sum=0;
    int count=0;
    printf("Enter a number");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    num=org;
    while (num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,count);
        num=num/10;
    }
    if(sum==org)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }


    return 0;
}
