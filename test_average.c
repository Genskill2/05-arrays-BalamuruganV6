#include <stdio.h>
#include <assert.h>


float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }

float average(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=+a[i];
    }
    float avg=(float)sum/n;
    return avg;
}
