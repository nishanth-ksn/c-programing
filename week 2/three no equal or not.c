//c program to cheak the numbers are equal are not
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("a :");
	scanf("%d",&a);
	
	printf("b :");
	scanf("%d",&b);
	
	printf("c :");
	scanf("%d",&c);
	
	if(a==b && a==c)
	printf("Equal");
  	else
	printf("Not Equal");

	
	return 0;
}
