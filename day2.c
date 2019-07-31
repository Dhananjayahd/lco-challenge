
#include<stdio.h>
int main()
{
	int i,c,j,k,n,g;
	printf("enter the value of n");
	scanf("%d",&n);
	c=n;
	for(i=1;i<=n;i++)
	{
		k=(i%2!=0)?i+1:i;
		for(g=(c%2!=0)?(c+1)/2:c/2;g>=1;g--)
			printf(" ");
		for(j=1;j<=k;j++)
			printf("*");
		printf("\n");
		c--;
	}
	return 0;
}
