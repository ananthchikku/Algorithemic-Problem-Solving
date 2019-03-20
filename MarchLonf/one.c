#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n;
	    scanf("%lld",&n);
	    long long int a[n],i,pos=0,neg=0,zer=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<0)
	            neg++;
	        else if(a[i]>0)
	            pos++;
	        else
	            zer++;
	    }

	    if(zer==0 )
	    {
	        if(pos>neg && neg!=0)
	            printf("%lld %lld\n",pos,neg);
            else if(pos>neg && neg==0)
                printf("%lld %lld\n",pos,pos);
            if(neg>pos && pos!=0)
	            printf("%lld %lld\n",neg,pos);
            else if(neg>pos && pos==0)
                printf("%lld %lld\n",neg,neg);
	    }
	    else
	    {
	        if(pos>neg && neg!=0)
	            printf("%lld %lld\n",pos+zer,neg);
            else if(pos>neg && neg==0)
                printf("%lld %lld\n",pos+zer,pos);
            if(neg>pos && pos!=0)
	            printf("%lld %lld\n",neg+zer,pos);
            else if(neg>pos && pos==0)
                printf("%lld %lld\n",neg+zer,neg);
	    }
	}
	return 0;
}

