#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int no=11;

void fun(int *p)
{
	*p = 21;
	p = &no;
	*p = 5;	

}
int main()
{
	int no1 =10;
	fun(&no1);
	printf("%d \t %d",no,no1);
	
	
	return 0;
	
}

/* OUTPUT 

5 
21

giving new address of no to the pointer which holds address of no1 
*/
