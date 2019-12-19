#include<stdio.h>

int main()
{
  int a = 545;
char b = 'c';
float c = 12.123;
double d = 123.123;
unsigned int e = 4;
short f = 88;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\nchar b value: %d and size: %d bytes\nfloat c value: %d and size: %d bytes\ndouble c value: %d and size: %d bytes\nunsigned int e value: %d and size: %d bytes\nshort f value: %d and size: %d bytes\n", a, sizeof(a), b, sizeof(b), c, sizeof(c), d, sizeof(d), e, sizeof(e), f, sizeof(f));
}
