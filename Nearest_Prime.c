#include<stdio.h>
int is_prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,arr[100],i,p,q,d,e,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i];j<=arr[i]+100;j++)
        {
            if(is_prime(j))
            {
                p=j;
                d=p-arr[i];
                break;
            }
        }
        for(j=arr[i];j>=0;j--)
        {
            if(is_prime(j))
            {
                q=j;
                e=arr[i]-q;
                break;
            }
        }
        if(d<e)
        {
            printf("%d
",p);
        }
        else
        {
            printf("%d
",q);
        }
    }
}