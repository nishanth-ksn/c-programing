//writen a program to calculate simple and compund interest
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,e;
	printf("principal :");
	scanf("%d",&a);
	printf("\nRate :");
	scanf("%d",&b);
	printf("\nTime :");
	scanf("%d",&c);
    
	d=a*b*c;
	e=(a*(pow(++b,c)))-a;
	printf("s.i=%d\nc.i=%d",d,e);
	return 0;
}
