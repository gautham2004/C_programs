#include <stdio.h>
#include <stdlib.h>

//Stage 0
//25.) Perfect number or not

int main()
{
    int num,sum=0,i;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    ((sum==num)?printf("%d is a perfect number",num):printf("%d is not a perfect number",num));

    return 0;
}
