#include<stdlib.h>
#include<stdio.h>
int main(){
  int *ptr=malloc(5*sizeof(int));
  printf("%p   %d   %u",ptr,ptr,ptr);
  return 0;
}
