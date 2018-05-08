#include<stdio.h>

struct demo
{
	int arr[4];
	int a;
}obj={10,20,30,40,50};


int main()
{
	obj.a =2;
	int *p = (int*)&obj;
	struct demo*q = &obj;
	
	int *r = &(q->arr[2]);
	
	printf("\nDeclared Structure\n\nstruct demo{\nint arr[4];\nint a;\n}obj={10,20,30,40,50}\n\n");
	
	printf("*p     - %d\n",*p);
	printf("*(p+1) - %d\n",*(p+1));
	printf("*(p+2) - %d\n",*(p+2));
	printf("*(p+3) - %d\n",*(p+3));
	
	printf("a - %d\n",*(p+4));
	
	printf("*(p+5) -> %d\n",*(p+5));
	printf("q->a \t q.a     \n%d\t%d\n",q->a,(*q).a);
	printf("q->arr[2] - %d\n",q->arr[2]);
	printf("%d\n",*(p+3)+q->a-*r);

	printf("%d\t%d\t%d\t%d\n",*(p+3),*(obj.arr+3),*(r+1),*((q->arr)+3));
	

return 0;
}

/* OUTPUT 

structure pointer is used as -> operator.

The 'arrow' operator is syntactic sugar. bar->member is the same as (*bar).member

arrow operator is used as dereferencing operaor in case of pointers .
pointers to an object is used to access the members of the structure then arrow is used.
pointer_to_obj -> member.

dot operator is used to access the mebers of object when object itself is used to access the members of it.
obj.member
*/
