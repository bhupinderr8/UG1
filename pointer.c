#include<stdio.h>
int* scanned(int* a,int num){
  for(int i=0;i<num;i++){
    scanf("%d",a);
    a++;
  }
  return a-num;
}

int main(){
  int a[3];
  int *ptr=scanned(a,3);
  for(int i=0;i<3;i++){
    printf("%d  ",*ptr);
    ptr++;
  }
}
