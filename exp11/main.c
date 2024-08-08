#include <stdio.h>
#include <stdlib.h>

//Stage 0
//11.) Greatest of two numbers 12.) Greatest of three numbers


int main()
{
    int n1,n2,n3;
    int max1=0;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);

    max1=(n1>n2)?n1:n2;
    printf("\nGreatest of %d and %d is %d",n1,n2,max1);

    printf("\nEnter three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2)
    {
        if(n1>n3)
        {
           printf("\nGreatest of %d , %d and %d is %d",n1,n2,n3,n1);
        }
        else
        {
           printf("\nGreatest of %d , %d and %d is %d",n1,n2,n3,n3);
        }
    }
    else
    {
        if(n2>n3)
        {
            printf("\nGreatest of %d , %d and %d is %d",n1,n2,n3,n2);
        }
        else
        {
            printf("\nGreatest of %d , %d and %d is %d",n1,n2,n3,n3);
        }
    }
    return 0;
}
