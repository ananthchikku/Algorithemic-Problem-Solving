#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n;
	    scanf("%lld",&n);
	    long long int a[n];
	    long long int i,jars=0;
	    for(i=0;i<n;i++){
	        scanf("%lld",&a[i]);
	        jars+=(a[i]-1);
	    }
	    printf("%lld\n",jars+1);
	}
	return 0;
}


