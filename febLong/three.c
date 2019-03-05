#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,max=-1;
        scanf("%d",&n);
        int a[n];
        int d[n];
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&d[i]);
        for(i=0;i<n;i++)
        {
            int a_sum=0;
            a_sum+=a[(n-i-1)%n];
            a_sum+=a[(n+i+1)%n];
            if(a_sum<d[i])
            {
                if(d[i]>max)
                    max=d[i];
            }
        }
        printf("%d",max);

    }
	return 0;
}


