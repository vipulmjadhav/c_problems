//predict the output

#include<stdio.h>

int main()
{
	char *p = "Vipul Jadhav";
	
	switch(*++p)
	{
		
		case 'i':
			printf("Inside i\n");
			break;
		
		case 105:
			printf("inside i by ascii\n");
			break;
		
		default:
			printf("Go\n");
		
			
			
	}
	return 0;
}

/*output
ERROR : Duplicate case value  i and 105 are the same as 105 is ascii representation of i.
*/

//------------------------------------------------------------------------


