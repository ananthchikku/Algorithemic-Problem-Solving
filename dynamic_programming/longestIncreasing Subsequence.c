/*
program to find longest increasing subsequence of numbers in an array
by ananth
on 11/2/2019
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    long long int size,i,j;
    printf("Enter size of array : ");
    scanf("%lld",&size);

    long long int a[size];
    printf("Enter the array : \n");
    for(i=0;i<size;i++)
        scanf("%lld",&a[i]);

    //build a table of same length with initial values as 1

    long long int b[size];
    for(i=0;i<size;i++)
        b[i]=1;
    //memset(b,1,size*sizeof(long long int));
    //logic
    for(i=1;i<size;i++)
    {
        for(j=0;j<i;j++)
            if(a[j]<a[i] && b[i]<b[j]+1)
                b[i]=b[j]+1;
    }
    for(i=0;i<size;i++)
        printf("%lld\t",b[i]);
    return 0;
}
