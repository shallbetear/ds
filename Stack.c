#include <stdio.h>
#include <stdlib.h>

typedef struct _stack {
  int* arr[100];
  int top;
} Stack;

Stack* initialize()
{
  Stack* st=(Stack*)malloc(sizeof(Stack));
  st->top=-1;
  return st;
}

void push(Stack* st,int data)
{
  st->arr[++st->top]=data;
}

int pop(Stack* st)
{
  return st->arr[st->top--];
}

void display(Stack* st)
{
  for(int i=st->top;i>=0;i--)
  {
    printf("%d ",st->arr[i]);
  }
  printf("\n");
}

int main()
{
  Stack* st=initialize();
  push(st,10);
  push(st,20);
  push(st,30);
  push(st,40);
  display(st);
  printf("%d\n",pop(st));
  display(st);
}