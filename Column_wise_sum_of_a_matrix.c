#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}