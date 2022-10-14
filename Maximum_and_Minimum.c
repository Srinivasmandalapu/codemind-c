#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j,max=0,min=100,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            z++;
            if(max<arr[i])
            {
                max=arr[i];
            }
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
        
    }
    if(z==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d %d",min,max);
    }
}