#include <stdio.h>
#include <stdlib.h>

// Stage 0
//13.) Number of digits in an integer
/*
int main()
{
    int num,count=0,org;
    printf("Enter a number:");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("The number of Digit(s) of %d is %d.",org,count);
    return 0;
}
*/
/*
//14.) Sum of digits of a number
int main()
{
    int num,sum=0,org;
    printf("Enter a number:");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("The Sum of Digit(s) of %d is %d.",org,sum);
    return 0;
}
*/
/*
//15.) Sum of first N natural numbers
int main()
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    sum=num*(num+1)/2;
    printf("The Sum of the first %d natural numbers is %d.",num,sum);
    return 0;
}
*/
/*
//16.) Sum of numbers in a given range
int main()
{
    int from,to,i,sum=0;
    printf("Enter the range:");
    scanf("%d %d",&from,&to);
    for(i=from;i<=to;i++)
    {
        sum=sum+i;
    }
    printf("Sum of the numbers from %d to %d is %d.",from,to,sum);
}
*/
