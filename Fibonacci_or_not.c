#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    while(c<n)
    {

        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}