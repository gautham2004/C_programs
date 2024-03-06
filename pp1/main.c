#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int flag=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        flag=0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is not a prime number.");
    }
    else
    {
        printf("It is a prime number.");
    }
    return 0;
}
