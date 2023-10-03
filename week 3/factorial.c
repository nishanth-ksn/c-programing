// factorial of a number
#include<stdio.h>

int main()
{
	int i,s,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
    for(i=1;i<=n;i++)
	{
		s=s*i;
	}    
	printf("%d",s);
	return 0;
}
