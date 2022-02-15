#include <stdio.h>
float input()
{
  float a;
  printf("Enter a number:\n");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  float sqrt=n;
  float temp=0;
  while(sqrt!=temp)
  {
    temp=sqrt;
    sqrt=(temp+(n/temp))/2;
  }
  return sqrt;
}
void output(float n,float sqrt)
{
  printf("the square root of %f is %f",n,sqrt);
}
int main()
{
  float n,sqrt;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}