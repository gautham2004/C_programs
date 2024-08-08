#include <stdio.h>
#include <stdlib.h>

// stage 0
//31.) Add two fractions

int main()
{
    // Entering values
    int numu1,numu2,deno1,deno2,x,y,i,gcd;
    printf("Enter numerator1:");
    scanf("%d",&numu1);
    printf(" Enter denominator1:");
    scanf("%d",&deno1);
    printf("\nEnter numerator2:");
    scanf("%d",&numu2);
    printf(" Enter denominator:");
    scanf("%d",&deno2);

    //Answer fraction
    x=(numu1*deno2)+(numu2*deno1);
    y=(deno1*deno2);

    //Reducing to simplest form
    for(i=1;i<=x && i<=y;i++)
    {
        if((x%i==0)&&(y%i==0))
        {
            gcd=i;
        }
    }
    printf("\nAddition of two fractions");
    printf("\n(%d/%d)+(%d/%d)=(%d/%d)",numu1,deno1,numu2,deno2,(x/gcd),(y/gcd));
    return 0;
}
