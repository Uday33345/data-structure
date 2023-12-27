#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void print()
{
	struct node *p=head;
	printf("\n[");
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("]");
}
void insertbegin(int data)
{
	struct node *lk=(struct node*)malloc(sizeof(struct node));
	lk->data=data;
	lk->next=head;
	head=lk;
}
void deleteend()
{
	struct node *ll=head;
	while(ll->next->next!=NULL)
	ll=ll->next;
	ll->next=NULL;
}
int main()
{
	insertbegin(45);
	insertbegin(68);
	insertbegin(56);
	insertbegin(78);
	insertbegin(69);
	printf("\tlinked list:");
	print();
	deleteend();
	printf("\nlinked list after:");
	print();
return 0;
}
