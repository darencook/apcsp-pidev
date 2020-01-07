#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  
  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 12.3;
  float* ptrtod;

  ptrtod = &d;

  d = 23.2;
    printf("The value of d is %f\n", d);

  *ptrtod = 34.5;
    printf("The value of d is %f\n", d);

    printf("The value of ptrtod is %d\n", ptrtod);
    printf("It stores the value %f\n", *ptrtod);
    printf("The address of d is %d\n", &d);

  float e = 34.5;
  float* ptrtoe;

  ptrtoe = &e;
  
  e = 45.6;
    printf("The value of e is %f\n", e);
  
  *ptrtoe = 56.7;
    printf("The value of e is %f\n", e);

    printf("The value of ptrtoe is %d\n", ptrtoe);
    printf("It stores the value %f\n", *ptrtoe);
    printf("The address of e is %d\n", &d);
  
  float tmp = e;
  e = d;
  d = tmp;
    printf("New d: %f\n", d);
    printf("New e: %f\n", e);
}

