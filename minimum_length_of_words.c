#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0,i,c=0;
    scanf("%[^
]s", s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            break;
            
        }
        count++;
        
    }
    printf("%d",count);
    
}