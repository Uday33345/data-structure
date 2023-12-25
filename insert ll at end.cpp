#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void printlist()
{
	struct node *p=head;
	printf("\n[]");
	while(p!=NULL)
	{
		printf("\t%d",p->data);
		p=p->next;
	}
}
void ud(int data){
	struct node *lk=(struct node*)malloc(sizeof(struct node));
	lk->data=data;
	lk->next=NULL;
	if(head==NULL)
	{
		head=lk;
	}
	else
	{
		struct node*ll=head;
		while(ll->next=NULL){
			ll=ll->next;
		}
		ll->next=lk;
			}
}
int main()
{
	int k=0;
	ud(12);
	ud(465);
	ud(45);
	ud(69);
	printf("\n linked list:");
printlist();
}
