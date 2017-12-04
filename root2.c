#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c;
  scanf("%f",&a);
  b=0.0001;
  c=a;
  while(a-b>0.000001){
    a=(a+c/a)/2;
    b=c/a;
  }
  printf("%f  %f\n",a,sqrt(c));
}
