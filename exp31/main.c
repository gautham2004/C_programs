#include <stdio.h>
#include <stdlib.h>

// Stage 0
//30.) Factors of a number

int main()
{
    int num,i;
    scanf("%d",&num);
    printf("\nFactors of %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
