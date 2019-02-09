#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the sum:");
    scanf("%d",&n);
    n++;
    int a[n];
    memset(a,0,n*sizeof(int));
    a[0]=1;

    int x,y,z;

    printf("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    int i,j;
    for(i=0,j=x;j<n;i++,j++)
        a[j]+=a[i];

    for(i=0,j=y;j<n;i++,j++)
        a[j]+=a[i];

    for(i=0,j=z;j<n;i++,j++)
        a[j]+=a[i];

    //for(i=0i<n;i++)
    printf("%d",a[15]);

    return 0;
}
