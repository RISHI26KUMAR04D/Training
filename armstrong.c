#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main()
{
	int num,res;
	printf("Enter the number:");
	scanf("%d",&num);
	res=armstrong(num);
	if(res==num)
	{
		printf("It is an ARMSTRONG number.");
	}
	else
	{
		printf("It is not an ARMSTRONG number.");
	}
	return 0;
}
int armstrong(int n)
{
	int r,count=0,sum=0;
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
