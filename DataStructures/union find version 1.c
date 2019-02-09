#include<stdio.h>
#include<stdlib.h>

int a[100];
void unioN(int n)
{
   int x,y;
   printf("Enter x,y\n");
   scanf("%d%d",&x,&y);
   int i;
   for(i=0;i<n;i++)
    if(a[i]==a[x])
        a[i]=a[y];
   printf("Array after operation\n");
      for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void finD()
{
    int x,y;
   printf("Enter x,y\n");
   scanf("%d%d",&x,&y);
   int i;
   while(1)
   {
       if(a[x]==x)
       {
           printf("(%d,",x);
           break;
       }
       else
        x=a[x];
   }
   while(1)
   {
       if(a[y]==y)
       {
           printf("%d)",y);
           break;
       }
       else
        y=a[y];
   }
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int i;
    printf("Enter the elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(1)
    {
        printf("\nOperations:\n1.union\n2.find\n3.exit\n");
        int choice;
        scanf("%d",&choice);
        if(choice==1)
            unioN(n);
        else if(choice==2)
            finD(n);
        else
            exit(0);
    }
    return 0;

}
