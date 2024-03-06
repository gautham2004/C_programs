#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n=2024;
    printf("\nThe following are the Leap years form 1 to 2024\n");
    printf("\n------------------------------------------------\n");
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        {
            printf("%d,",i);

        }
    }
    return 0;
}
