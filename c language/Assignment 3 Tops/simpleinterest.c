#include<stdio.h>
int main()
{
	int p,n,r,si;
	printf("Enter the principle amount:\n");
	scanf("%d",&p);
	printf("Enter the no of years\n");
	scanf("%d",&n);
	printf("Enter the rate \n");
	scanf("%d",&r);
	si=(p*n*r)/100;
	printf("ans %d",si);
	return 0;
}
