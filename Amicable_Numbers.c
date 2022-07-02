#include<stdio.h>
int main()
{
    int n,m,i,sum=0,sum2=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum==m && sum2==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}