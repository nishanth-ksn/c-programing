//write a program to convert days into years
#include<stdio.h>

int main()
{
	double a;
	printf("Enter the no of days:");
	scanf("%lf",&a);
	
	printf("%lfdays=%lfyears",a,a/365);
	return 0;
}
