// converting 0's to 1's in a number
#include <stdio.h>
#include <stdlib.h>

    int convert0to1multi(int num)
	{
	  if(num==0)
	  return 0;
      int digit=num%10;
	  if (digit==0)
	  digit =1;
	  return convert0to1multi(num/10)*10+digit;
	}
	int convert0to1single(int num)
	{
	  if(num==0)
	  return 1;
	  else return convert0to1multi(num);
	}
	int main()
	{
	  int num= 1000105;
	  printf("%d",convert0to1single(num));
	  return 0;
	}
