#include <stdio.h>

int arrayAdd(int* arr, int s, int n)
{
  for (int i = 0; i < s; i++)
    {
	arr[i] = arr[i] + n; 
	printf("%d\n", arr[i]);
    }
}

int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    {
	arr[i] = i * i;
    }
  printf("Printing index 4 and 9: index 4: %d, index 9: %d\n", arr[4], arr[9]);
  arrayAdd(arr,100,4);
  return 0;
}
