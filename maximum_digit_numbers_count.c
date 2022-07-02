#include<stdio.h>
int digit_count(int n)
{
    int i,dc=0,d;
    while(n)
    {
        d=n%10;
        n=n/10;
        dc++;
    }
    return dc;
}
int main()
{
    int n,i,arr[100],p,dc=0,min=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        if(min<p)
        {
            min=p;
        }
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        if((digit_count(arr[i]))==min)
        {
            printf("%d ",arr[i]);
        }
    }
}