#include<stdio.h>
int main()
{
    int n,i,arr[100],t,d=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            sum=sum+d;
        }
    }
    printf("%d",sum);
}