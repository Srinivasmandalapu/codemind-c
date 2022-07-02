#include<stdio.h>
int main()
{
    int n,i,arr[100],m,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%m==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}