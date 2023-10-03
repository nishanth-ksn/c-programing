//print odd number
#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the Nth numebr :");
	scanf("%d",&n);
	
	printf("/nOdd number:\n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		printf("%d,",i);
	}
	return 0;
}
