//reverse of a number
#include<stdio.h>

int main()
{
	int i,a,n;
	printf("Enter the number n :");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
    {
    	a=n%10;
    	n=n/10;
    	printf("%d",a);
	}
	
	return 0;
}
