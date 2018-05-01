//predict the output

#include<stdio.h>

int main()
{
	int no=3;
	
	switch(no-1+3)
	{
		case 1:
			printf("Hello\n");
		case 2:
			printf("Hell\n");
			break;
			
		default:
			printf("Go\n");
			continue;
			
		case 3:
			printf("Done\n");
			
	}
	return 0;
}

/*output
ERROR : continue statement should be written in loop not in normal control structure .
*/

//------------------------------------------------------------------------


