#include<stdio.h>

int main()
{

	int no=10;
	int *p = &no;
	
	int **q = &p;
	
	int ***r = &q;
	
	int ****a = &r;
	
	int *****b = &a;
	
	int ******c = &b;
	
	printf("No -> %d\n",no);
	printf("&no -> %d\n",&no);
	printf("*p -> %d\n",*p);
	printf("**a -> %d\n",**a);
	printf("&(***b) -> %d\n",&(***b));
	printf("*****c -> %d\n",*****c);
	printf("***(&b) -> %d\n",***(&b));
	printf("&(**r) -> %d\n",&(**r));
	printf("******c -> %d\n",******c);
	printf("***r******b -> %d\n",***r******b);
	printf("******c+*****b -> %d\n",******c+*****b);
	
	
	
	
	return 0;
}

/* OUTPUT

*/
