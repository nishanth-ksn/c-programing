//write a C programing to profarm all arthimetic operations
#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	
	printf("addition of a and b=%d\nsunraction of a and b=%d\nmultiplication of a and b=%d\ndivition of a and b=%d",c,d,e,f);
	return 0;
}
