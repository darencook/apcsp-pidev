  
#include <stdio.h>

float areaOfCircle(float radius) 
{
  float area = (3.14159265358979323846 * radius * radius);
  return area;
}

int main()
{
  
  for (float radius = 3.5; radius <= 12.5; radius++)
    {
	float result = areaOfCircle(radius);
	printf("Area at r = %f: %f\n", radius, result);
    }
}
