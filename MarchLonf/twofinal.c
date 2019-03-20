#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char s[20];
char d;
int length;

int minn(int str,int end)
{
    int i,index=str;
    char min=s[str];
    for(i=str+1;i<end;i++)
    {
        if(s[i]<min){
            min=s[i];
            index=i;
        }
    }
   // printf("min:%c\n",min);
    return index;
}

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        //gets(s);
        scanf("%s\n",s);
        scanf("%c",&d);
        length = strlen(s);
       // printf("%d%c",length,d);
       // printf("%d",minn(0,length));

        char ans[20];
        int ind=0,k=0;
       // printf("input:%s",s);

        while(ind<length)
        {
            ind=minn(ind,length);
            if(s[ind]<d)
                ans[k++]=s[ind++];
            else
                break;

        }
        while(k<length)
            ans[k++]=d;
        ans[k]='\0';
        printf("%s\n",ans);
    }
    return 0;

}
