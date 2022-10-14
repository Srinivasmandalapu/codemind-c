#include<stdio.h>
int main()
{
    int n,a[100],d,x,c=0,m=0,i,j;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        a[x]=d;
        x++;
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    if(x==c)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}