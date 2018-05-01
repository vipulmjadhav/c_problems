#include<stdio.h>

int main()
{
	int no =223;
	int *ptr = &no;

	/*char*ctr = (char*)&no;
	printf("%d\n",*ctr);         //upto 127	
	
	int*itr = (int*)&no;
	printf("%d\n",*itr);  
	
	float *ftr = (float*)&no;
	printf("%f\n",*ftr);	
	
	double *dtr = (double*)&no;
	printf("%f\n",*dtr);	

	char c = 'Z';
	
	char*ctr = (char*)&c;
	printf("%c\n",*ctr);        //Z	
	
	int*itr = (int*)&c;
	printf("%c\n",*itr);        //Z	
	
	float *ftr = (float*)&c;
	printf("%c\n",*ftr);	
	
	double *dtr = (double*)&c;
	printf("%c\n",*dtr);

	

	float f = 3.4;
	
	char*ctr = (char*)&f;     
	printf("%f\n",*ctr);	
	
	int*itr = (int*)&f;
	printf("%f\n",*itr);	
	
	float *ftr = (float*)&f;  //3.14
	printf("%f\n",*ftr);	
	
	double *dtr = (double*)&f;
	printf("%f\n",*dtr);
*/		
	double d = 3.66;
	
	char*ctr = (char*)&d;     
	printf("%f\n",*ctr);	
	
	int*itr = (int*)&d;
	printf("%f\n",*itr);	
	
	float *ftr = (float*)&d;  
	printf("%f\n",*ftr);	
	
	double *dtr = (double*)&d; //3.66
	printf("%f\n",*dtr);
	
return 0;
}
