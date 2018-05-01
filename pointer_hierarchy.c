#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int no=12;
	int *p = &no;
	
	int **q = &p;
	int ***r = &q;
	
	
	printf("POINTS SAME ADDRESS :  %d\t%d\t%d\n",*p,**q,***r);
	
	printf("Change in value:  %d\t%d\t%d\n",++*p+**q,**q,***r);
	
	printf("value aftre preincrement-> %d\t %d\n",*p,**q);
	return 0;
	
}

/* OUTPUT 

++*p+**q

-> ++p increments value by +1 hence it is 13 here and **q points to that 13 so 
total addition is 13+13 = 26
*/
