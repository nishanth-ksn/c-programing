#include<stdio.h>

void main()
{
	int i,j,k;
    for(i=0;i<5;i++)
    {	
    	for(k=0;k<2*i;k++)
    	printf(" ");
    	for(j=0;j<5-i;j++)
		printf("* ");
	   	printf("\n");
	}
}
