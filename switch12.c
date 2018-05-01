//predict the output

#include<stdio.h>

int main()
{
	int i=3;
	

		switch(i/2)
		{
		
			case 1:
				printf("Hello \n");
				goto '4';
				break;
		
			case 4:
				printf("Demo\n");
				break;
				
			case 3:
				printf("Go\n");
				break;
				
			
			default:
				printf("default\n");
				break;
				
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


