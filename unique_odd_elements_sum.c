#include<stdio.h>
int main()
{
    int n,i,arr[100],j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1 && arr[i]%2)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}