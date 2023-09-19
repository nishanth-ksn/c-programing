//write a program to swap two number
#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	c=a;d=b;
	a=d;b=c;
	
	printf("a=%d\nb=%d",a,b);
	return 0;
}
