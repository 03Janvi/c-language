#include<stdio.h>
int main()
{
	char choice;
	float l,w,r,h,b,pi=3.14,area;
	printf("Enter your Choice:");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'r':
			printf("Enter length and width:");
			scanf("%f %f",&l,&w);
			area=l*w;
			printf("The area of rectangle is: %f",area);
			break;
			
		case 't':
			printf("Enter height and base");
			scanf("%f %f",&h,&b);
			area=(h*b)/2;
			printf("The area of triangle is %f",area);
			break;
			
		case 'c':
			printf("Enter radius:");
			scanf("%f",&r);
			area=pi*r*r;
			printf("The area of circle is %f",area);
			break;
			
			default:
				printf("Enter valid choice");
	}
	return 0;
}
