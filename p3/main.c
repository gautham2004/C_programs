#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The multiplication table of %d ",n);
    printf("\n***********************************\n");
    while(i<=20)
    {
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
        i=i+1;
    }

    return 0;
}
