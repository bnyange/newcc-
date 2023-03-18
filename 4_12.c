#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str,char c, char e)
{
    char *s = str;
    
    for(int x =0; s[x]!='\0';x++)
    {   
        if(s[x] == c)
        {
            s[x] = e;
        }
        
    }
    for (int x = 0; x < strlen(str); x++)
    {
        printf("%c",s[x]);
    }
    
}

int main()
{
    char str[80],c,e;
    
        gets(str);
        if(str[0]=='s'&&str[1] =='t'&& str[2] =='o' && str[3]=='p')
        {
            exit (1);
        }

        scanf("%c",&c);
        getchar();
        scanf("%c",&e);

        replaceAll(str,c,e);
        

    
    return 0;
}