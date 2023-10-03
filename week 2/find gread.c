//find grade
#include<stdio.h>

int main()
{
	int a,p,c,b,m,cs;
	printf("physics :");
	scanf("%d",&p);
	printf("\nchemistry :");
	scanf("%d",&c);
	printf("\nbiology :");
	scanf("%d",&b);
	printf("\nmath :");
	scanf("%d",&m);
	printf("\ncomputer :");
	scanf("%d",&cs);
	
	a=(p+c+b+m+cs)/5;
	printf("\npersentage :%d%%  ",a);
	
	if(a>=90)
	printf("Gread A");
	else if(a>=80 && a<90)
	printf("Gread B");
	else if(a<80&&a>=70)
	printf("Gread C");
	else if(a<70&&a>=60)
	printf("Gread D");
	else if(a<60&&a>=40)
	printf("Gread E");
	else
	printf("Gread F");
	
	return 0;
}
