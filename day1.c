#include<stdio.h>
int main()
{
	int n,i,result;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		result=n*i;
		printf("%dx%d ""= %d\n",n,i,result);
	}
	return 0;
}
