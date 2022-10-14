#include<stdio.h>
int is_self_dividing(int n)
{
    int temp,d,c=0,dc=0;
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        dc++;
        if(d==0)
        {
            break;
        }
        if(n%d==0)
        {
            c++;
        }
    }
    if(dc==c)
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
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(is_self_dividing(i))
        {
            printf("%d ",i);
        }
    }
}