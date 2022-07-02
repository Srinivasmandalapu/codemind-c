#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,i,p;
    scanf("%d",&n);
    p=sqrt(n);
    for(i=1;i<=p;i++)
    {
        if(i*i==n)
        {
            printf("True");
            c=c+1;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}