#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x=0,j=0;
    scanf("%[^
]s", s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a')
        {
            //printf("a ");
            a++;
            
        }
        if(s[i]=='e')
        { 
            //printf("e ");
            b++;
            
        }
        if(s[i]=='i')
        {
             //printf("i ");
             c++;
            
        }
        if(s[i]=='o')
        {
            //printf("o ");
            d++;
            
        }
        if(s[i]=='u')
        {
            //printf("u ");
            e++;
            
        }
        if(s[i]=='A')
        {
            //printf("A ");
            f++;
            
        }
        if(s[i]=='E')
        {
            //printf("E ");
            g++;
            
        }
        if(s[i]=='I')
        {
            //printf("I ");
            h++;
            
        }
        if(s[i]=='O')
        {
            //printf("O ");
            x++;
            
        }
        if(s[i]=='U')
        {
            //printf("U ");
            j++;
            
        }
        
    }
    if((a>0&&b>0&&c>0&&d>0&&e>0)||(f>0&&g>0&&h>0&x>0&&j>0))
    {
        printf("True");
        
    }
    else
    {
        printf("False");
        
    }
    
}