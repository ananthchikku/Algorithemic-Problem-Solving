#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    n=10;
    long long a[n+1];
    memset(a,0,sizeof(a));
    a[0]=1;
    a[1]=1;
    a[2]=2;

    long long i,j;
    for(i=3;i<=n;i++)
    {
        for(j=0;j<i;j++)
            a[i]=a[i]+a[j]*a[i-1-j];
    }

    for(i=0;i<=n;i++)
        printf("%lld\t",a[i]);

    return 0;
}
