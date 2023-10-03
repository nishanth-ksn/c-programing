//type of triangle
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the side lengt of triangel \nSide1:");
	scanf("%d",&a);
	printf("Side2:");
	scanf("%d",&b);
	printf("Side3:");
	scanf("%d",&c);
	
	if(a==b&&a==c)
	printf("Equilateral triangle");
	else if(a==b||a==c||b==c)
	printf("Isosceles triangle");
	else
	printf("scalene triangle");
	
	return 0;
}
