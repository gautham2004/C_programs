#include <stdio.h>
#include <stdlib.h>

// stage 0
// 19.) Fibonacci series up to n

int main()
{
    int t1=0,t2=1,num,i;
    int nex_term=t1+t2;

    printf("Enter the number of terms:");
    scanf("%d",&num);

    printf("The fibonacci series: ");
    if(num==1)
    {
        printf("%d",t1);
    }
    else if(num==2)
    {
        printf("%d %d",t1,t2);
    }

    else
    {
       printf("%d %d",t1,t2);
       for(i=3;i<=num;i++)
    {
        printf(" %d",nex_term);
        t1=t2;
        t2=nex_term;
        nex_term=t1+t2;
    }
    }

    return 0;
}
