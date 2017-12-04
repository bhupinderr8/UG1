#include<stdio.h>
#include<stdlib.h>
struct stack{
  int top;
  unsigned capacity;
  int *arr;
};
struct stack* create(unsigned capacity){
  struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
  stack->capacity=capacity;
  stack->top=-1;
  stack->arr=(int*)malloc(capacity*sizeof(int));
  return stack;
}

int isFull(struct stack* stack){
  return stack->capacity<=stack->top+1;
}

int isEmpty(struct stack* stack){
  return stack->top<=-1;
}

void push(struct stack* stack,int item){
  if(isFull(stack)) return;
  stack->arr[++stack->top]=item;
  printf("Pushed item is %d\n",item);
}

int pop(struct stack* stack){
  if(!isEmpty(stack)) return stack->arr[stack->top--];
}
int main(){
  struct stack* stack=create(100);
  push(stack,10);
  push(stack,103);
  push(stack,104);
  push(stack,130);
  push(stack,40);
  printf("popped item is %d\n",pop(stack));
  return 0;
}
