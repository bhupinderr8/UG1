#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
void Push(struct Node **head,int num){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=*head;
    *head=temp;
}

void Add(struct Node **head,int num,int index){
  struct Node* new=(struct Node*)malloc(sizeof(struct Node));
  struct Node* temp=*head;
  if(*head==NULL){
    *head=new;
    new->data=num;
    new->next=NULL;
  }
  while(temp!=NULL&&index>1){
    temp=temp->next;
    index--;
  }
  new->data=num;
  new->next=temp->next;
  temp->next=new;
}

void delete(struct Node **head,int index){
  if(*head==NULL) return;
  struct Node* temp=*head;
  struct Node* prev=NULL;
  while(index>0&&temp!=NULL){
    prev=temp;
    temp=temp->next;
  }
  prev->next=temp->next;
  free(temp);
}

void printlist(struct Node* head){
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  temp=head;
  while(temp->next!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n\n\n\n");

}
int main(){
  struct Node* head=(struct Node*)malloc(sizeof(struct Node));
  head->next=NULL;
  int action,num,index;
  while(1){
    printf("Enter the Action to perform\n-----------------\n\n");
    printf("1: Add a node at start\n2: Add a node at index\n3: Delete a node\n4: Close program\n");
    scanf("%d",&action);
    switch(action){
      case 1:
      {
        printf("Enter a number\n");
        scanf("%d",&num);
        Push(&head,num);
        printf("New List formed is\n");
        printlist(head);
        break;
      }
      case 2:
      {
        printf("Enter a number\n");
        scanf("%d",&num);
        printf("Enter index(starting at 0)\n");
        scanf("%d",&index);
        Add(&head,num,index);
        printf("New list formed is\n");
        printlist(head);
        break;
      }
      case 3:
      {
        printf("Enter index of the number(starting at 0)\n");
        scanf("%d",&index);
        delete(&head,index);
        printf("New List formed is\n");
        printlist(head);
        break;
      }
      case 4:
      return 0;
      default:
      {
        printf("Enter a valid Number\n");
        break;
      }
    }
  }
  return 0;
}
