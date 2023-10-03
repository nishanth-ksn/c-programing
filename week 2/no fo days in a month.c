//print a number of days in a month
#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the year:");
	scanf("%d",&a);
	printf("Enter the month :");
	scanf("%d",&b);
	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
	printf("number of days in a month : 31");
	else if(b==4||b==6||b==9||b==11)
	printf("number of days in a month : 30");
	else
	{
		if(a%4==0&&(a%100!=0||a%400==0))
		printf("number of day in a month : 29");
		else
		printf("number of days in a month : 28");
	}
	
	return 0;
}
