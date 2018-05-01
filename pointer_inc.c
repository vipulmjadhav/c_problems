#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	float f =3.12;
	float *p = &f;
	*p = 6.12;
	
	printf("%f\t\t%f",f,*p);
	
	int no = 11;
	int *pt,*qt;
	
	pt = &no;
	qt = &no;
	(*pt)++; //increment in pointer pointing value.
	*pt++;                        //it will give the value after incrementing pointer location and value is pointer address itself
	printf("\n%d\n%d\n",*qt,*pt);
	
return 0;	
}

/* OUTPUT 

*/
