//multiplication table
#include<stdio.h>

int main()
{
	int i,n;
	printf("multiples of n :");
	scanf("%d",&n);
	
	for(i=0;i<=16;i++)
	printf("%d * %d = %d\n",i,n,i*n);
	return 0;
}
