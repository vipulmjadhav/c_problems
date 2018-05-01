//predict the output

#include<stdio.h>

int main()
{
	int i=0;
	
	for(int i=0;i<4;i++)
	{
		switch(i)
		{
		
			case 0:
				printf("Hello 0\n");
				break;
		
			case 2:
				printf("Hello 2\n");
				i=4;
				continue;
		
			case 1:
				printf("Hello 1\n");
				
			case 4:
				printf("Hello 4\n");
				break;
		
			
			
		}
	}
	
	return 0;
}

/*output

Hello 0
Hello 1
Hello 4
Hello 2

*/

//------------------------------------------------------------------------


