#include<stdio.h>
int main()
{
	int i,num,odd=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter %d number:",i);
		scanf("%d",&num);
		if(num%2!=0)
		{
			odd++;
		}
	}
	printf("The total odd numbers are %d",odd);
	return 0;
}
