//write a cprogram to cheak weather a given year is leap year r not
#include<stdio.h>

int main()
{
	int a;
	printf("Enter the year:");
	scanf("%d",&a);
	
	if(a%4==0)
	{
		printf("entered numebr is leap year");
	}
	else
	{
		printf("Entered number is not leap year");
	}
	return 0;
}
