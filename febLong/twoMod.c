
#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int a[26]={0};
	while(t--)
	{
	    int n,i,j,num=0;
	    scanf("%d",&n);
	    char arr[200];

	    for(j=0;j<26;j++){
                a[j]=0;
            }
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",arr);
            int j;
            int flag[26];
            for(j=0;j<26;j++){
                flag[j]=0;
            }
            for(j=0;j<strlen(arr);j++)
            {
                flag[arr[j]-'a']++;
            }
           /*
            printf("for %s flag array is ",arr);
            for(j=0;j<26;j++)
                printf("%d\t",flag[j]);

            printf("\n");
            printf("for %s index array is",arr);
            */
            for(j=0;j<26;j++)
                if(flag[j]!=0)
                    a[j]++;
            /*
            for(j=0;j<26;j++)
                printf("%d\t",a[j]);
            printf("\n");
            */
	    }
	    for(i=0;i<26;i++)
        {
            if(a[i]==n)
                num++;
        }
        printf("%d\n",num);
	}
	return 0;
}




