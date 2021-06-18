#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}

int factors(int n , int ret[])
{
    int f[n],c1=0,c2=0;
    for( int i=2; i<=n; i++)
    {
        int c=0;
        for( int j=2; j<=i; j++)
        {
            if( i%j == 0)
            {
                c++;
            }
        }
        if( c == 1)
        {
            f[c1]=i;
            c1++;
        }
    }
    for( int i=0; i<c1; i++)
    {
        for(int j=0;j<c1;j++)
        {
            if( n%f[i] == 0)
            {
                n = n/f[i];
                ret[c2] = f[i];
                c2++;
            }
            else
                j = c1;
        }
    }
    return c2;
}
