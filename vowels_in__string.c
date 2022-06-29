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
        if(s[i]=='a'&&a==0)
        {
            printf("a ");
            a++;
            
        }
        if(s[i]=='e'&&b==0)
        {
            printf("e ");
            b++;
            
        }
        if(s[i]=='i'&&c==0)
        {
            printf("i ");
            c++;
            
        }
        if(s[i]=='o'&&d==0)
        {
            printf("o ");
            d++;
            
        }
        if(s[i]=='u'&&e==0)
        {
            printf("u ");
            e++;
            
        }
        if(s[i]=='A'&&f==0)
        {
            printf("A ");
            f++;
            
        }
        if(s[i]=='E'&&g==0)
        {
            printf("E ");
            g++;
            
        }
        if(s[i]=='I'&&h==0)
        {
            printf("I ");
            h++;
            
        }
        if(s[i]=='O'&&x==0)
        {
            printf("O ");
            x++;
            
        }
        if(s[i]=='U'&&j==0)
        {
            printf("U ");
            j++;
            
        }
        
    }
    if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&x==0&&j==0)
    {
        printf("-1");
        
    }
    
}