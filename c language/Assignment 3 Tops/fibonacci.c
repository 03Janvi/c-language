#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,i,num;
	printf("Enter the no of steps you want in the sequence:");
	scanf("%d",&num);
	printf("%d\t",n1);
	printf("%d\t",n2);
	printf("%d\t",n3);
	for(i=1;i<=num-3;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\t",n3);	
	}
	
