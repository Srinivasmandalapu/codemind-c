#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,c=0;
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
    int n,m,i,c=0;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i==1)
        {
            continue;
        }
        if(is_prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
}