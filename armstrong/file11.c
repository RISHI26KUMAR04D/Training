#include<stdio.h>
#include<math.h>
//#include"file22.c"
int armstrong(int n);
int main()
{
	int num,res;
	printf("Enter the number:");
	scanf("%d",&num);
	res=armstrong(num);
	if(res==num)
	{
		printf("It is an ARMSTRONG number.\n");
	}
	else
	{
		printf("It is not an ARMSTRONG number.\n");
	}
	return 0;
}
