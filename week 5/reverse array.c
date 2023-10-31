//reverse array
#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5},m,i;
	
	for(i=0;i<2;i++)
	{
		m=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=m;
	}
	
	for(i=0;i<5;i++)
	printf("%d,",arr[i]);
	
	return 0;
}
