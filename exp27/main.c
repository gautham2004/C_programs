#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Stage 0
//26.)Automorphic number or not

int main()
{
    int num,org;
    int sq;
    int count=0;
    scanf("%d",&num);
    sq=pow(num,2);
    org=num;
    //counting digits
    while(num>0)
    {
        count++;
        num/=10;
    }
    // extracting the last digits
    int den=pow(10,count);
    int last=sq%den;
    ((last==org)?printf("\n%d is an Automorphic number.",org):printf("\n%d is not an Automorphic number",org));
    return 0;
}
