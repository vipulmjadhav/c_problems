#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ch ='M';
	int no=10;
	float f = 3.45;
	double d = 4.00;
	
	char *p = &ch;
	int *pt = &no;
	float *ptr = &f;
	double *ptrr = &d;
	
	printf("Size of character              :%d\n",sizeof(ch));
	printf("Size of address of character   :%d\n",sizeof(&ch));
	printf("Size of address of int         :%d\n",sizeof(&no));
	printf("Size of address of float       :%d\n",sizeof(&f));
	printf("Size of address of double      :%d\n\n",sizeof(&d));
	
	printf("size of value at charpointer holds  :%d\n",sizeof(*p));
	printf("size of value at intpointer holds   :%d\n",sizeof(*pt));
	printf("size of value at floatpointer holds :%d\n",sizeof(*ptr));
	printf("size of value at doublepointer holds:%d\n\n",sizeof(*ptrr));
	
	printf("Size of char pointer           :%d\n",sizeof(p));
	printf("Size of int pointer            :%d\n",sizeof(pt));
	printf("Size of float pointer          :%d\n",sizeof(ptr));
	printf("Size of double pointer         :%d\n\n",sizeof(ptrr));
	
	
	
}

/* OUTPUT 

Size of character              :1
Size of address of character   :8
Size of address of int         :8
Size of address of float       :8
Size of address of double      :8

size of value at charpointer holds  :1
size of value at intpointer holds   :4
size of value at floatpointer holds :4
size of value at doublepointer holds:8

Size of char pointer           :8
Size of int pointer            :8
Size of float pointer          :8
Size of double pointer         :8


all pionters have same size ie 8.
address size of each data type is same ie 8.

*/
