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
	      if(a!=0 && b!=0){
	            if(a==b)
	                {
	                    solve=0;
	                    printf("Lose\n");
	                    break;
	                }
	             if(a%b==0)
	             {
	                 solve=(n/b) - (n/a);
	             }
	             if(b%a==0)
	             {
	                 solve =(n/a)-(n/b);
	             }

	             if(a%b!=0 && b%a!=0)
	             {
	                 solve = (n/a) + (n/b) - (n/(a*b));
	             }
	         /*
	      for(i=1;i<=n;i++)
	      {
	          if(i%a==0 && i%b==0)
	            continue;
	          if(i%a==0)
	            solve++;
	          else if(i%b==0)
	            solve++;
	      }
	      */
	      if(solve<k)
	        printf("Lose\n");
	      else
	        printf("Win\n");

	}

	}
	return 0;
}


