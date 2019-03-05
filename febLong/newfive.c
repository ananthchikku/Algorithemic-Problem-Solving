#include<stdio.h>
#include<string.h>
int a[26];
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    char str[1000000];
	    scanf("%s",str);
	    memset(a,0,(26)*sizeof(int));
        //printf("%s",str);
	    long int i,j,count=0;
	    for(i=0;str[i]!='\0';i++)
        {
	        a[(int)str[i]-65]++;
	        count++;
        }

        int di[count+1];
        memset(di,0,(count+1)*sizeof(int));

        for(i=1;i<=count;i++)
        {
            if(count%i==0)
                di[i]=1;
        }

        long long int diff=-1,flips=999999999999;
        //int flag=0;
        for(i=1;i<=count;i++)
        {
           int change=0;
           diff=0;
            if(di[i]==1)
            {
                for(j=0;j<26;j++)
                {
                    if(a[j]!=0)
                    {
                        if(a[j]>=i)
                            {
                                diff+=a[j]-i;
                                change=1;
                            }
                    }

                }
             //  printf("%d",diff);
            }
            if(diff<flips && (diff!=0||change==1))
                flips=diff;
            printf("%d",flips);
        }
        if(flips==999999999999)
            printf("%d\n",0);
        else
            printf("%d\n",flips);
	}
	return 0;
}

