#include<math.h>
int armstrong(int n)
{
	int r=0,count=0,sum=0;
	while(n!=0)
	{
		n/=10;
		count++;		
	}
	for(int i=0;n!=0;i++)
	{
		r=n%10;
		sum=sum+pow(r,count);
		n/=10;
	}
	
	return sum;
}