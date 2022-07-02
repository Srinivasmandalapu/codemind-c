#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if((i)*(i+1)==n)
        {
            c=c+1;
            printf("YES");
            break;
        }
    }
    if(c==0)
    {
        printf("NO");
    }
}