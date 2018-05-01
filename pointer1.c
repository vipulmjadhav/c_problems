#include<stdio.h>

int main()
{
	int arr[] = {10,20,30};
	int *p = &(arr[1]);
	
	printf("value incremented -> %d\t%d\n",*p,++*p);
	printf("check after inc -> %d\n",*p);
	printf("change in array -> %d\n",arr[1]);
	
	// -------char array - -------------
	
	char a[] = {'v','i','p','u','l','j'};
	char *ptr = a , *q = &(a[4]), *r = &(a[5]);
	
	printf("%c\t%c\t%c\t%c\t%c\t%c\t\n",a[0],*(ptr+1),*(q-2),*(ptr+3),*(q),*(r));	
	
	printf("%c\t%c\t%c\t%c\t%c\t%c\t\n",a[2],*(q-2),*(ptr+3),2[a],*(q),*(r));	
	
	return 0;
}

/* OUTPUT
value incremented -> 21	21
check after inc -> 21
change in array -> 21
v	i	p	u	l	j	
p	p	u	p	l	j	


a[2] and 2[a]  gives the same result hence 2[a]==a[2]
*/
