#include<stdio.h>
int main()
{
	int r,s=0,k=0,i;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;++i)
	{
		k=0;
		for(int j=1;j<=r-i;++j)
		{
			printf("  ");
		}
		while(k!=2*i-1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}
	return 0;

}
