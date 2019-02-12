#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

/*int bcoeff(int n,int k)
{
    if(k==0 || k==n)
        return 1;
    else 
        return (bcoeff(n-1,k-1)+bcoeff(n-1,k));

}*/

int bcoeff(int n,int k)
{
    int c[k+1];
    memset(c,0,sizeof(c));
    c[0]=1;
    int i,j;
    for(i=0;i<=n;i++)
        for(j=min(i,k);j>=0;j--)
            c[j]=c[j]+c[j-1];
    return c[k];
}

int mat[100][100];

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",bcoeff(n,k));
    return 0;
}
