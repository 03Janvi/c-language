#include<stdio.h>
int main()
{
	float days,year,yr,d;
	printf("..........Days to years.........\n");
	printf("Enter days:");
	scanf("%f",&days);
	year=days/365;
	printf("%f year\n",year);
	printf("..........Year to days.........\n");
	printf("Enter year:");
	scanf("%f",&yr);
	d=yr*365;
	printf("%f days",d);
	return 0;
}
