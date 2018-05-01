//predict the output

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p = "Vipul";
	
	switch(strlen(p))
	{
		
		case '5':
			printf("length corrects\n");
			break;
		
		case 5:
			printf("length is 5\n");
			break;
		
		default:
			printf("takes deafult\n");
		
			
			
	}
	return 0;
}

/*output
length is 5
*/

//------------------------------------------------------------------------


