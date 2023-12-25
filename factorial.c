#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("\n enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
}
	printf("\n the factorial is:%d:",fact);
	
	return 0;
}
