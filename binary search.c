#include<stdio.h>
int main()
{
	int list[100],i,f,l,s,n,m;
	printf("\n enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
printf("\n enter the searched value:");
scanf("%d",&s);
f=0;
l=n-1;
m=(f+l)/2;
while(f<=l)
{
	if(list[m]<s)
	{
		f=m+1;
	}
	else if(list[m]==s)
	{
		printf("\n element is found %d",m);
		break;
	}

else
{
	l=m-1;
}
}
if(f>l)
{
	printf("\nelement not found:");
}
return 0;
}

