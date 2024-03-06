//Swapping values
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   a=10;
   b=25;
   printf("\nThe value of a is %d",a);
   printf("\nThe value of b is %d",b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nThe value of a after swap is %d",a);
   printf("\nThe value of b after swap is %d",b);
   return 0;
}
