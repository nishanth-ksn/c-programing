//write a program to convert km to m to cm to mm.
#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	printf("Enter the value in :");
	scanf("%d",a);
	printf("convert to(km to m(1),m to cm(2),cm to mm(3)):");
	scanf("%c",&b);
	
	switch(b)
	{
		case 1:
			c=a*1000;
		    printf("\n%dkm =%dm ",a,c);
		    break;
		case 2:
			d=a*1000;
			printf("\n%dm =%dcm",a,d);
			break;
		case 3:
			e=a*1000;
			printf("\n%dcm =%dmm",a,e);
			break;
	}
    return 0;
}
	
