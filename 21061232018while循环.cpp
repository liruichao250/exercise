#include <stdio.h>  // whileÑ­»·
int main()
{
	int n,sum=0,counter;
	counter=1;
	while(counter<6)
	{
		printf("input n:");
		scanf("%d",&n);
		sum+=n;
		counter++;
	}
	printf("sum=%d\n",sum);
	return 0;
} 
/*
#include <stdio.h>  // whileÑ­»·
int main()
{
	int n,sum=0,counter;
	counter=1£»
	do
	{
		printf("input n:");
		scanf("%d",&n);
		sum+=n;
		counter++;
	}while(counter<6);
	printf("sum=%d\n",sum);
	return 0;
} 
*/