#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter String\n");
    scanf("%s",string);
    int size = pow(2,strlen(string));
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<strlen(string);j++)
            if(i & 1<<j)
                printf("%c",string[j]);
        printf("\n");
    }
    return 0;
}
