#include <stdio.h>
#include <stdlib.h>

//step 0
//8.) LCM of two numbers 9.) GCD of two numbers 10.) HCF of two numbers
// Note: GCD and HCF are same


int main()
{
    int n1,n2,min=0,Lcm=0;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    min=(n1<n2)?n1:n2;

    while(min>=2)
    {
       if((n1%min==0)&&(n2%min==0))
       {
        printf("\nThe GCD(or)HCF of %d and %d is %d",n1,n2,min);
        break;
       }
       min--;
    }
    Lcm=(n1*n2)/min;
    printf("\nThe LCM of %d and %d is %d",n1,n2,Lcm);

    return 0;
}
