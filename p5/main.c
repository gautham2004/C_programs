#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("Capital letters:");
    for(i='A';i<='Z';i++)
    {
        printf("%c ",i);

    }
    printf("\nSmall letters:");
    for(i='a';i<='z';i++)
    {
        printf("%c ",i);
    }

    return 0;
}
