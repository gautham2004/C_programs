//factorial of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num;
    long int factorial=1;
    num=7;
    n=1;
    while(n<=num)
    {
        factorial=factorial*n;
        n=n+1;
    }
    printf("Factorial of the number is : %d",factorial);
    return 0;
}
