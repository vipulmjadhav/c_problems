#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int no=10;
	int *p = &no;
	
	printf("ADDRESS       : %d\n",p);

	printf("INITIAL VALUE : %d\n",*p);
	
	*p=11;                
	
	printf("CHANGED VALUE : %d\n",*p);
	
	printf("PRE-INCREMENt : %d\n",++(*p));    
	printf("POST-INCREMENt: %d\n",(*p)++);

	printf("after post-increment:%d\n",*p);
	
	printf("ADDRESS INCREMENT: %d\n",*++p); //this will increment in address not in value.
	printf("%d\n",*p);                   //when pointer is not pointing to any specific value then it shows address only.
	printf("%d\n",*p);
	
	
return 0;
}

/*OUTPUT

ADDRESS       : 1141437212
INITIAL VALUE : 10
CHANGED VALUE : 11
PRE-INCREMENt : 12
POST-INCREMENt: 12
after post-increment:13
POST-INCREMENT: 1141437216
1141437216
1141437216

*/
