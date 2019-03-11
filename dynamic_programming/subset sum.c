/* program to return the number susets whose sum is greater than given value
by ananth
on 16/2/2019
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int subs(int a[],int a_count,int val)
{
    int count=0;
    int x,k;
    for(x=0;x<pow(2,a_count);x++)
    {
        int sum=0;
        for(k=0;k<a_count;k++)
            //check if kth bit is set in x
            {
                if(x&(1<<k))
                    sum+=a[k];
            }
        if(sum>=val)
            count++;
    }

}  

int main()
{
    int a[4]={1,2,3,4};
    printf("%d\n",subs(a,4,3));
    return 0;
}