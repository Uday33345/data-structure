#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void print(){
	struct node *p=head;
	printf("\n[");
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("]");
}
void insertatbegin(int data){
	struct node*lk=(struct node*)malloc(sizeof(struct node));
	lk->data=data;
	lk->next=head;
	head=lk;
}
void deleteany(int key){
	
   struct node *temp = head, *prev;
   if (temp != NULL && temp->data == key) {
      head = temp->next;
      return;
   }

   // Find the key to be deleted
   while (temp != NULL && temp->data != key) {
      prev = temp;
      temp = temp->next;
   }

   // If the key is not present
   if (temp == NULL) return;

   // Remove the node
   prev->next = temp->next;
}
int main(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(40);
   insertatbegin(55);
   printf("Linked List: ");

   
   print();
   deleteany(30);
   printf("\nLinked List after deletion: ");
  print();
 return 0;
}

