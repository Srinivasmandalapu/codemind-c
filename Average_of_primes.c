#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0,sum=0,m=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            m=m+1;
            sum=sum+arr[i];
        }
    }
    if(m!=0)
    {
        avg=(float)sum/m;
        printf("%.2f",avg);
    }
}