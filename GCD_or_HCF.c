#include<stdio.h>
int main()
{
    int a,b,p,i;
    scanf("%d%d",&a,&b);
    for(i=a;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            p=i;
            break;
        }
    }
    printf("%d",p);
}