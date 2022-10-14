#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,c=0;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,j,p,q,f=0;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n;j>0;j--)
        {
            if(is_prime(i) && is_prime(j))
            {
            if(i*j==n && i!=j)
            {
                p=i;
                q=j;
                f=1;
                break;
            }
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d %d",p,q);
    }
}