#include<stdio.h>
int main()
{
	int i,j,num[2][3]={{1,4,3},{2,5,8}};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
