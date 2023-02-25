#include<stdio.h>
int main()
{
	int range,n1=0,n2=1,i=1;
	int sum=0;
	printf("Enter the range:");
	scanf("%d",&range);
	while(sum<range)
	{
		
		printf("%d\n",sum);
		n1=n2;
		n2=sum;
		sum=n1+n2;
		i++;
	}
	printf("There are %d fibonacci numbers are there.",i);
	return 0;
}
