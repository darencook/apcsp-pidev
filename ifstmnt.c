#include <stdio.h>

int main()
{
int a = 0;
int b = 2;
  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is b\n");
  }
  else
  {
    printf("a is not b\n");
  }

if (a != b)
  {
    printf("a is not b\n");
  }
  else
  {
    printf("a is b\n");
  }
if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than or equal to b\n");
  }
if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  {
    printf("a is not equal to 0 or b is not equal to 0 or a and b are not equal to 0\n");
  }
if (a == 0 || b == 0)
  {
    printf("a or b is equal to 0\n");
  }
  else
  {
    printf("a and b are not equal to 0\n");
  }
if (!(a == 0))
  {
    printf("a is not equal to\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }

}
