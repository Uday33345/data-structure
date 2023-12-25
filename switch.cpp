#include<stdio.h>
int main()
{
	int day;
	printf("\n enter day(1-7):");
	scanf("\n%d",&day);
	switch(day)
	{
		case 1:printf("monday:");
		break;
		
		case 2:printf("\n tuesday:");
		break;
		case 3:printf("\n wednesday:");
		break;
		case 4:printf("\n thursday:");
		break;
		case 5:printf("\n friday:");
		break;case 6:printf("\nsaturday:");
		break;
		case 7:printf("\n  sunday:");
		break;
		default :printf("\n not a valid day:");
	}
	}
