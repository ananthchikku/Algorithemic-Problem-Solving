/*program to display max product by cutting the rod into pieces so that product is maximized
by ananth
on 9/3/2019*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int n=7;
    int a[n+1];
    memset(a,0,sizeof(a));
    for(i=0;i<=n;i++)
        printf("%d\t",a[i]);
    printf("\n");


    for(i=0;i<=n;i++)
        for(j=1;j<=i/2;j++)
        {
            if(a[i]< j*(i-j))
                a[i]=j*(i-j);
            if(a[i]<a[i-j])
                a[i]=a[i-j];
        }
    for(i=0;i<=n;i++)
        printf("%d\t",a[i]);
    return 0;
}
