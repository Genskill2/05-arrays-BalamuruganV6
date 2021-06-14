#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }

int max(int a[],int n)
{
    int l=a[0];
    for(int i=0;i<n;i++)
    {
        if( l < a[i])
            l=a[i];
    }
    return l;
}
