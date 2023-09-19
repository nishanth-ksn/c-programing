//write a program to clalculate percentage of a student given the marks of 5 different subjects
#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	printf("Enter the mark of the subjucts:\nEnglish:");
	scanf("%d",&a);
	printf("\nMath:");
	scanf("%d",&b);
	printf("\nscience:");
	scanf("%d",&c);
	printf("\nsocial:");
	scanf("%d",&d);
	printf("\ncomputer:");
	scanf("%d",&e);
	
	f=(a+b+c+d+e)/5;
	printf("\npersentail of the student:%d%%",f);
	return 0;
}
