#include<stdio.h>
int main()
{
    int n,d,p,sum=0;
    scanf("%d",&n);
    p=n*n;
    while(p!=0)
    {
       d=p%10;
       p=p/10;
       sum=sum+d;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}