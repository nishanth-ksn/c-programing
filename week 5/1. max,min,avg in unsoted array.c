//max min and average in unsoted array
#include<stdio.h>

int main()
{
	int arr[6]={3,6,4,2,1,7};
	int s=0,a,i,j,max,min;
	for(i=0;i<6;i++)
		s+=arr[i];
	a=s/6;
	max=arr[0];
	min=arr[0];
	for(j=1;j<=6;j++)
	{
		if(max<arr[j])
		max=arr[j];
		if(min>arr[j])
		min=arr[j];
	}
	printf("max:%d\nmin:%d\naverage:%d",max,min,a);
	return 0;
}
