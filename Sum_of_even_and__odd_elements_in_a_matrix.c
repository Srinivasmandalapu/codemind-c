#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],sum=0,sum2=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
            for(j=0;j<c;j++)
            {
                if(arr[i][j]%2==0)
                {
                sum=sum+arr[i][j];
                }
            }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2!=0)
            {
                sum2=sum2+arr[i][j];
            }
        }
    }
    printf("%d %d",sum,sum2);
}