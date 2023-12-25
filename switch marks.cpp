#include<stdio.h>
int main()
{
	int marks;
	printf("\n enter marks:");
	scanf("%d",&marks);
	switch(marks)
	{
		case 1:if(marks<=30)
		printf("\n fail");
		break;
		case 2:if(marks>30&&marks<=60)
		printf("\n pass:");
		break;
		case 3:if(marks>60&&marks<=80)
		printf("\n grade b:");
		break;
		case 4:if(marks>80)
		printf("\n excellent:");
		break;
		default :printf("\n madda gudu:");
	}
	}
