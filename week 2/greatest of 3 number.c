//write c program to print greatest of three numbers
#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	printf("\nEnter the value of c:");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	 printf("a is the greatest number");
	else if(b>c)
	 printf("b is the greatest number");
	else 
	 printf("c is the greatest numebr");
	 
	return 0;
}
