#include<math.h>
int armstrong(int n)
{
	int r=0,count=0,sum=0;
	int n1=n;
	while(n!=0)
	{
		n/=10;
		count++;		
	}
	for(int i=0;n1!=0;i++)
	{
		r=n1%10;
		sum=sum+pow(r,count);
		n1/=10;
	}
	
	return sum;
}
