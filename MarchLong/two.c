#include <stdio.h>

int main(void) {
	// your code goes here

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,temp,newno=0;
	    scanf("%lld",&n);
	    int d,dig;
	    scanf("%d",&d);
	    temp=n;
	    while(temp)
	    {
	        dig=temp%10;
	        if(dig>d)
	            newno=newno*10+d;
	        else
	            newno=newno*10+dig;
	        temp=temp/10;

	    }
	    temp=0;
	    while(newno)
	    {
	        dig=newno%10;
	        temp=temp*10+dig;
   	        newno=newno/10;

	    }
	    printf("%lld",temp);

	}
	return 0;
}

