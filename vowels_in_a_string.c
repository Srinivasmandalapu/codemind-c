#include <stdio.h>
#include <string.h>
int main()
{
    char s[200],d;
    int i,b=0,c;
    scanf("%[^
]s", s);
    scanf("%s",&d);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==d)
        {
            b++;
            c=i;
            break;
            
        }
        
    }
    if(b!=0)
    {
        printf("True");
        printf("
%d",c);
        
    }
    else
    {
        printf("False");
        
    }
    
}