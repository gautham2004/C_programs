//converting binary to decimal number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary,decimal=0,remainder;
    int weight=1;
    printf("Enter the binary number:");
    scanf("%d",&binary);

    while(binary!=0)
    {
        remainder=binary%10;
        decimal=decimal+weight*remainder;
        binary=binary/10;
        weight=weight*2;
    }

    printf("The equivalent decimal value is: %d",decimal);
    return 0;
}
