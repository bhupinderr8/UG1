#include<stdio.h>
#include<math.h>
float fac(float);
int main()
{
  float n=11,x=3;
  float i,p,z;
  float sum=0;
  for(i=1;i<=n;i=i+2)
  {
    p=pow(-1,(i-1)/2)*pow(x,i);
    z=fac(i);
    sum=sum+(p/z);
  }
  printf("%lf",sum);


}
float fac(float n)
{
  float i,fac=1.0;
for(i=1;i<=n;i++)
{
  fac=fac*i;
}
return fac;

}
