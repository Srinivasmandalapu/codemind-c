#include<stdio.h>
int main()
{
    int n,i,arr[100],m,p,h=1000,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=m && arr[i]<=k || arr[i]<=m && arr[i]>=k)
        {
            if(h>arr[i])
            {
                h=arr[i];
                c=c+1;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",h);
    }
}