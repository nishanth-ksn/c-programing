//calculate salary of an employe
#include<stdio.h>

int main()
{
	int b,h,d,t,g,a;
	printf("region:\nmedras(1)\nchennai(2)\nbombay(3)\nhydrabath(4)\nEnter the number :");
	scanf("%d",&a);
	printf("\nBasic :");
	scanf("%d",&b);
	d=(48*b)/100;
	t=(8*b)/100;
	
    if(a==1)
    h=(48*b)/100;
	else if(a==2)
	h=(27*b)/100;
	else if(a==3)
	h=(24*b)/100;
	else
	h=(16*b)/100;

	g=b+h+d+t;
    printf("salary of an employ :%d",g);

	return 0;
}
