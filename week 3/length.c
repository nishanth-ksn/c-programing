//Length of a number
#include<stdio.h>

int main()
{
	int i,n,b=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
    for(i=0;n!=0;i++)
    {
    	n=n/10;
    	++b;
	}
	
	printf("\n%d",b);
	return 0;
}
