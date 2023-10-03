//sum of digits
#include<stdio.h>

int main()
{
	int a,b=0,i,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
	{
		a=n%10;
		n=n/10;
		b=a+b;
	}
	printf("%d",b);
	
	return 0;
}
