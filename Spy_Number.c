#include<stdio.h>
int main()
{
    int n,sum=0,product=1,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        product=product*d;
    }
    if(product-sum==0)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}