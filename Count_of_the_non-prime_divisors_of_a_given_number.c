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
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d",c);
}