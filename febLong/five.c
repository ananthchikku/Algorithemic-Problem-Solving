/*
program to make equal characters in string by adding new characters
by ananth
5/2/2019
*/
#include <stdio.h>
#include<string.h>
long long int a[26];
long long bal;

int check()
{
    printf("in check\n");
    int i;
    for(i=0;i<26;i++)
        if(a[i]!=a[i+1] && a[i]!=0 && a[i+1]!=0)
            return 0;
    return 1;

}

void balance()
{
    printf("in BALANCE\n");
    int i;
    for(i=0;i<26;i++)
    {
        if(a[i]<a[i+1] && a[i]!=0 && a[i+1]!=0){
            a[i]++;
            bal++;
        }
        else if(a[i]>a[i+1] && a[i]!=0 && a[i+1]!=0)
        {
            a[i+1]++;
            bal++;
        }

    }
   if(check()==0)
        balance();


}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    char str[1000000];
	    scanf("%s",str);
        //printf("%s",str);
	    long int i;
	    for(i=0;str[i]!='\0';i++)
	        a[(int)str[i]-65]++;
        /*
        for(i=0;i<26;i++)
            printf("%d\t",a[i]);
        */

	    if(check()==0)
	        balance();

        printf("%lld",bal);
        bal=0;
        memset(a,0,26*sizeof(int));
	}


	return 0;

}

