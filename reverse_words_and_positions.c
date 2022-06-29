#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int c=strlen(str);
    for(int i=0,j=c-1;i<j;i++,j--)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s",str);
}