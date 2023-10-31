//even sized arry
#include<stdio.h>

int main()
{
	int arr[6]={1,2,3,4,5,6},i,m;
	
	for(i=0;i<6;i=i+2)
	{
		m=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=m;
	}
	for(i=0;i<6;i++)
	printf("%d,",arr[i]);
	return 0;
}
