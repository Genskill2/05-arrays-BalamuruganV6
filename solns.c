/* Enter your solutions in this file */
#include <stdio.h>

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

int min(int a[],int n)
{
    int s=a[0];
    for(int i=0;i<n;i++)
    {
        if( s > a[i])
            s=a[i];
    }
    return s;
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




