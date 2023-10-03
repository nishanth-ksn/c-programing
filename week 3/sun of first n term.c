//sum of first n natural number
#include<stdio.h>

int main()
{
	int n,i,s=0;
	
	printf("Enter the N th number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s=s+i;
	printf("/nSum of first n terms:%d",s);
	return 0;
}
