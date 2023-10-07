#include<stdio.h>
int main()
{
	int op,a,b,ans;
	printf("----------Menu----------\n");
	printf("1.Addition\n");
	printf("2.substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
	printf("Enter the number for operation from the menu:");
	scanf("%d",&op);
	
	switch (op)
	{
		case 1:
			printf("Enter first value:");
			scanf("%d",&a);
			printf("Enter second value:");
			scanf("%d",&b);
			ans=a+b;
			printf("The addition is %d\n",ans);	
			break;
		case 2:
			printf("Enter first value:");
			scanf("%d",&a);
			printf("Enter second value:");
			scanf("%d",&b);
			ans=a-b;
			printf("The substraction is %d\n",ans);	
			break;
		case 3:
			printf("Enter first value:");
			scanf("%d",&a);
			printf("Enter second value:");
			scanf("%d",&b);
			ans=a*b;
			printf("The multiplication is %d\n",ans);	
			break;
		case 4:
			printf("Enter first value:");
			scanf("%d",&a);
			printf("Enter second value:");
			scanf("%d",&b);
			ans=a/b;
			printf("The division is %d\n",ans);	
			break;
		case 5:
			printf("Enter first value:");
			scanf("%d",&a);
			printf("Enter second value:");
			scanf("%d",&b);
			ans=a%b;
			printf("The modulo is %d\n",ans);	
			break;
			
		default:
			printf("Invalid choice");
	}
	return 0;
}

