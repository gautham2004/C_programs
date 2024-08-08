#include <stdio.h>
#include <stdlib.h>

// Stage 0
//29.) Power of a number
int main()
{
    int base,exponent,p;
    scanf("%d %d",&base,&exponent);
    p=pow(base,exponent);
    printf("%d",p);

    return 0;
}
