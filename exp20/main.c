#include <stdio.h>
#include <stdlib.h>

// Stage 0
//20.) Leap year or not

int main()
{
    int num;
    printf("Enter the year:");
    scanf("%d",&num);
    if(num%4==0)
    {
        printf("%d is a Leap year.",num);
    }
    else
    {
        printf("%d is not a Leap year.",num);
    }

    return 0;
}
