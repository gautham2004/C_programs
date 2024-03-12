#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a=b=10;

    while(a++<=13||b++<=13)
    {
        printf("%d %d\n",a,b);
    }
    printf("%d %d",a+10,b+10);
    return 0;
}
