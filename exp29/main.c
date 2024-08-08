#include <stdio.h>
#include <stdlib.h>

// Stage 0
//28.)Abundant number or not

/*An abundant number is a positive integer for which the sum of its proper divisors (excluding the number itself) is greater than the number.
For example, the number 12 is abundant because its proper divisors are 1, 2, 3, 4, and 6, which sum up to 16, exceeding 12.
*/

int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    ((sum>num)?printf("%d is a Abundant number.",num):printf("%d is Not abundant number.",num));
    return 0;
}
