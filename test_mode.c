#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }

int mode(int a[], int n)
{
    int c[n];
    int m=0;
    for( int i=0;i<n;i++ )
    {
        int num=a[i];
        for( int j=i;j<n;j++ )
        {
            if( num == a[j])
            {
                c[i]++;
            }
        }
    }
    int l=c[0];
    for(int i=0;i<n;i++)
    {
        if( l < c[i])
        {
            l=c[i];
            m=i;
        }
    }
    return a[m];
}
