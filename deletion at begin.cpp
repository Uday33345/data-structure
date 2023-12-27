#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void printlist(){
	struct node *p=head;
	printf("\n[");
while(p!=NULL)
{
	printf("%d,",p->data);
	p=p->next;
}
printf("]");
}
void insertbegin(int data){
	struct node *lk=(struct node*)malloc(sizeof(struct node));
	lk->data=data;
	lk->next=head;
	head=lk;
}
void deletebegin()
{
	head=head->next;
}
int main(){
	insertbegin(12);
	insertbegin(34);
	insertbegin(58);
	insertbegin(78);
	insertbegin(69);
	printf("linked list:");

printlist();
deletebegin();
printf("\nlinked list after deletion:");
printlist();}
