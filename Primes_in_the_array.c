#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
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
    printf("%d",m);
}