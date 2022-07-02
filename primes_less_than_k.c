#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0,sum=0,m=0,k;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]<=k)
        {
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            m=m+1;
        }
          }
    }
    printf("%d",m);
}