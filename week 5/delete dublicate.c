//duplicate
#include<stdio.h>

int main()
{
	int arr[8]={5,1,2,3,4,1,4,3},m,i;
	int count;
	for(i=0;i<8;i++)
	{
		count=0;
		for(m=i+1;m<8;m++)
		{
			if(arr[i]==arr[m])
			{
			    arr[m]=0;
	        }
		}
		if(arr[m]!=0)
        printf("%d,",arr[i]);
	}
	return 0;
}
	
