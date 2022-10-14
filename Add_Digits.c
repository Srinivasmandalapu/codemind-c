#include<stdio.h>
int main()
{
    int n,s=0,d=0;
    scanf("%d",&n);
    while(n/10!=0)
    {
        s=0;
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            s=s+d;
        }
        n=s;
    }
    printf("%d",s);
}