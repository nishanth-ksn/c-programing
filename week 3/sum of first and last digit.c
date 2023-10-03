//sun of first and last digit
#include<stdio.h>

int main()
{
	int a,b,c,i,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
	{
		a=n%10;
		c=n;
		n=n/10;
		if(i==0)
		b=a;
	}
	printf("%d",b+c);
	
	return 0;
}
