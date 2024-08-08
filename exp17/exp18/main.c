#include <stdio.h>
#include <stdlib.h>


// Stage 0
// 18.) Factorial of a number

int main()
{
    int num,org;
    double fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    org=num;
    if(num==0)
    {
        printf("The factorial of 0 is 1.");
    }
    else
    {
       while(num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("The factorial of %d is %d",org,fact);
    }


    return 0;
}
