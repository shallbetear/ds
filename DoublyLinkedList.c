#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
  int data;
  struct _node* next;
  struct _node* prev;
} Node;

Node* createnode(int data) 
{
  Node* n=(Node*)malloc(sizeof(Node));
  n->data=data;
  n->next=NULL;
  n->prev=NULL;
  return n;
}

void insertnode(Node** head,int data)  //insert at first
{
  Node* n=createnode(data);
  n->next=*head;
  n->prev=NULL;
  *head=n;
}

void deletenode(Node** head)   //delete first element
{
  *head=(*head)->next;
  (*head)->prev=NULL;
}

void display(Node* head)
{
  Node* t=head;
  while(t!=NULL)
  {
    printf("%d ",t->data);
    t=t->next;
  }
  printf("\n");
}

int main()
{
  Node* head=createnode(0);
  insertnode(&head,1);
  insertnode(&head,2);
  insertnode(&head,3);
  insertnode(&head,4);
  display(head);
  deletenode(&head);
  deletenode(&head);
  display(head);
}