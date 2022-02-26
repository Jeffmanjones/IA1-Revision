#include <stdio.h>

typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex a;
  printf("Enter the real and imaginary parts of a complex number: \n");
  scanf("%f%f",&a.real, &a.imaginary);
  return (a);
}

complex add(complex a, complex b)
{
  complex c;
  c.real=a.real + b.real;
  c.imaginary=a.imaginary+ b.imaginary;
  return (c);
}

void output(complex a, complex b, complex c)
{
  printf("%.1f+%.1fi + %.1f+%.1fi is %.1f+%.1fi \n", a.real, a.imaginary,b.real, b.imaginary,c.real, c.imaginary);
}

int main()
{
  complex a, b, c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}
