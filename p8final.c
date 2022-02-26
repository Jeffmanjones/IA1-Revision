#include <stdio.h>

typedef struct complex 
{
  float real,imaginary;
}complex;

int get_n()
{
  int n;
  printf("Enter number of complex numbers\n");
  scanf("%d",&n);
  return n;
}

complex input_complex()
{
  complex a;
  printf("Enter a complex number\n");
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}

void input_n_complex(int n,complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}

complex add(complex a, complex b)
{
  a.real=a.real+b.real;
  a.imaginary=a.imaginary+b.imaginary;
  return a;
}

complex add_n_complex(int n, complex c[n])
{
  complex tsum;
  tsum.real=0;
  tsum.imaginary=0;
  for(int i=0;i<n;i++)
  {
    tsum =add(tsum,c[i]);
  }
  return tsum;
}

void output(int n,complex c[n], complex result)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%.1f+%.1fi + ",c[i].real, c[i].imaginary);
  }
  printf("%.1f+%.1fi",c[n-1].real, c[n-1].imaginary);
  printf(" is %.1f+%.1fi",result.real, result.imaginary);
}

int main()
{
  int n;
  n=get_n();
  complex c[n];
  input_n_complex(n,c);
  complex sum;
  sum=add_n_complex(n,c);
  output(n,c,sum);
  return 0;
}