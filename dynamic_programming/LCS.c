#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];


    scanf("%s %s",str1,str2);

    int lcs[101][101];

    //printf("%s\n%s\n",str1,str2);

    memset(lcs,0,101*sizeof(int));

    for(int i = 0; i < 102; i++)
        lcs[i][0] = 0;

    int i,j;

    for(i = 1; i < strlen(str1) + 1; i++)
    {
        for(j = 1; j < strlen(str2) + 1; j++)
        {
            if(str1[i - 1] == str2[j - 1])
            {
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }
            else
            {
                lcs[i][j] = lcs[i][j-1] > lcs[i-1][j] ? lcs[i][j-1] : lcs[i-1][j];
            }
        }
    }

    /*Optionally print the lcs
    for(int i = 0; i < strlen(str1) + 1 ;i++)
    {
        for(int j = 0; j < strlen(str2) + 1; j++)
        {
            printf("%d ",lcs[i][j]);
        }
        printf("\n");

    }
    */

    printf("%d\n",lcs[i - 1][j - 1]);


    return 0;
}

lis :

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lisFun(int a[], int n)
{
    int i, j;
    int lis[n];
    int max=0;

    for(i = 0; i < n; i++)
        lis[i] = 1;

    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i] > a[j] && lis[i] < lis[j]+1)
                lis[i] = lis[j]+1;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(lis[i] > max)
            max = lis[i];
    }
    return max;
}

int main()
{
    int n = 6;
    int a[] = {5, 11, 3, 15, 30, 25};
    int result = lisFun(a,n);

    printf("Number of terms %d\n", result);
    return 0;
}
