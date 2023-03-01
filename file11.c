#include<stdio.h>
#include<math.h>
#include "file22.c"
int armstrong(int n);
int main()
{
	int num,res;
	printf("Enter the num:");
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
