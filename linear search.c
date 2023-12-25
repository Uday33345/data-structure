#include<stdio.h>
int main(){
	int list[20],size,i,selement;
	printf("\n enter the size of an element:");
	scanf("%d",&size);
	printf("\nenetr any%dinteger value:",size);
	for(i=0;i<size;i++)
	scanf("%d",&list[i]);
	printf("\nenter element to search:");
	scanf("%d",&selement);
	for(i=0;i<size;i++)
	{
		if(selement==list[i])
		{
			printf("\nelement is found%d",i);
			break;
		}
	}
	if(i==size)
printf("\ngiven element is not found in the list:");
getch();
}
