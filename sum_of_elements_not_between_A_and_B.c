#include<stdio.h>
int main()
{
    int n,arr[1000],i,a,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            c=c+arr[i];
        }
    }
    printf("%d",c);
}