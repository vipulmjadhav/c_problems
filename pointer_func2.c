#include<stdio.h>
#include<stdlib.h>
#include<string.h>



float no1 = 10;

float* fun(int no)
{		no1 = no1+no;
	return &no1;
}
int main()
{
	float *p =NULL;
	p = fun(10);
	printf("%f \t",*p);
	
	return 0;
	
}

/* OUTPUT 

function should not return address of local variable [-Wreturn-local-addr]
  return &no1;
hence float no1 is globally declared. 
 
*/
