#include<stdio.h>
int main()
{
	int c;
	printf("Enter 1 for monday 2 for tuesday 3 for wednesday 4 for thursday 5 for friday 6 for saturday 7 sunday \n");
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
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
			printf("Enter valid choice");
	}
	return 0;
	
}
