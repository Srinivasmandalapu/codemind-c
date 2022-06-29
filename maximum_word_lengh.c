#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int v=strlen(str);
    int i,max=0,c=0;
    for(i=0;i<v;i++)
    {
        if(str[i]==' ')
        {
            c=0;
            
        }
        else
        {
            c++;
            
        }
        if(c>max)
        {
            max=c;
            
        }
        
    }
    printf("%d",max);
    
}