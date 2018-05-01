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
				printf("Hello\n");
				continue;
		
			case 2:
				printf("Demo\n");
				i=4;
				continue;
		
			case 1:
				printf("Done\n");
				continue;
				
			case 4:
				printf("Go\n");
				break;
		
			
			
		}
	}
	
	return 0;
}

/*output

Hello
Done
Demo

*/

//------------------------------------------------------------------------


