#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int no=639;
	int *p = &no;	if(p == &no)
		printf("Hello same!!!\n");
	
	char *c = (char*)&no;
	printf("char ->  %d\n",*c);
	int n = 2;
	float *ptr = (float*)&n;
	printf("%d\n",*ptr);
	return 0;
	
}

/* OUTPUT 

pointer holds direct address of the value its poiniting...
character pointer holds integer values upto 127 after that ie from 128 it shows -128 and increments.
character pointer holds (2^7)-1 integer values.
charcter pointer cant hold the float and double values.
integer pointer cant hold the float values.

Interesting fact about character pointer ...
it holds upto 128 intergers then it starts derementing upto 0.
ie
0->127                0 - 127   (2^7-1)
-128->0               128 - 256 (2^8)
1->127                257 - 383 (2^9-1)
-128->0               384 - 512 (2^10)
1->127                512 - 639 (2^11-1)
.
.
.
*/
