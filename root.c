#include<stdio.h>
#include<math.h>


float squareRoot(float n)
{
  /*We are using n itself as initial approximation
   This can definitely be improved */
  float x = n;
  float y = 1;
  float e = 0.00001; /* e decides the accuracy level*/
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}





int main(){
  float fx,x,a,g;
  int i;
  scanf("%f",&x);
  for(i=0;i*i<=x;i++){

  }
  i--;
  a=i*i;
  g=i;
  fx=g+(x-a)/(2*g)+(x-a)*(x-a)/(8*g*g*g)+3*(x-a)*(x-a)*(x-a)/(48*g*g*g*g*g)-15*(x-a)*(x-a)*(x-a)*(x-a)/(24*16*g*g*g*g*g*g*g);


  printf("%d  %f  a=%f   error=%f                %f",i,fx,a,sqrt(x)-fx,squareRoot(x)-sqrt(x));
}
