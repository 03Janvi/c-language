#include<stdio.h>
int main()
{
	int i,num,end;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the value till you want to print the table:");
	scanf("%d",&end);
	
	for(i=1;i<=end;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0;
}
