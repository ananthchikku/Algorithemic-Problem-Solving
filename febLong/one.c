#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	      long long int n,a,b,k,solve=0;
	      scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
	      long long int i;

	      for(i=1;i<=n;i++)
	      {
	          if(i%a==0 && i%b==0)
	            continue;
	          if(i%a==0)
	            solve++;
	          else if(i%b==0)
	            solve++;
	      }
	      if(solve<k)
	        printf("Lose");
	      else
	        printf("Win");

	}
	return 0;
}

