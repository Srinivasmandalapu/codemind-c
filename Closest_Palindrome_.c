#include<stdio.h>
int is_palindrome(int n)
{
    int rev=0,t,d;
    t=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(rev==t)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,p,q,d,e;
    scanf("%d",&n);
    for(i=n+1;i<=n+100;i++)
    {
        if(is_palindrome(i))
        {
        p=i;
        d=p-n;
        break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(is_palindrome(i))
        {
        q=i;
        e=n-q;
        break;
        }
    }
    if(d<e)
    {
        printf("%d",p);
    }
    else if(d>e)
    {
        printf("%d",q);
    }
    else
    {
        printf("%d %d",q,p);
    }
}