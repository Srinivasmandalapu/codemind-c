#include<stdio.h>
int is_reverse(int n)
{
    int rev=0,d,temp;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,i,np,pp;
    scanf("%d",&n);
    for(i=n+1;i<=n+100;i++)
    {
        if(is_reverse(i))
        {
            np=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(is_reverse(i))
        {
            pp=i;
            break;
        }
    }
    if(np-n>n-pp)
    {
        printf("%d",pp);
    }
    else if(np-n==n-pp)
    {
        printf("%d %d",pp,np);
    }
    else
    {
        printf("%d",np);
    }
}