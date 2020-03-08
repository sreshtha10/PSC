#include<stdio.h>
void main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");	
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",i+k-1);
		}
	printf("\n");
	}
}