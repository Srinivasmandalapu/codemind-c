#include<stdio.h>
int main()
{
    int n,i,arr[100],t,d,rev=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        rev=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+d;
        }
        if(rev==t)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}