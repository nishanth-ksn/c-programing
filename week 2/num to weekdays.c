//input day number and print weekdays
#include<stdio.h>

int main()
{
	int a;
	printf("Enter the numebr(1-7)");
	scanf("%d",&a);
	
	switch(a)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednusday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Entered numebr is not between(1-7)");
    }
    return 0;
}
