//fibonacci number
#include<stdio.h>

int main()
{
	int i,a=0,b=1,s,n;
	printf("Enter the nth numebr :");
	scanf("%d",&n);
	printf("0,1,");
	for(i=1;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
		printf("%d,",s);
	}
	return 0;
}
