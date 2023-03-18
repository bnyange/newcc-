#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int count_consonants(char str[])
{
    char *c = str;
    int i=0,x=0;

    while (*c != '\0')
    {
        c++;
        if(*c == 'a'|| *c == 'e'|| *c == 'i'|| *c == 'o'|| *c == 'u'|| *c == ' '
                                         ||*c=='A' ||*c=='E' ||*c=='I' ||*c=='O' ||*c=='U')
        {
            i++;
        }
        else 
        {
            x++;
        }
    }

    printf("Number of consonants=%d\n",x);
}

int main()
{
    
    char str[100];
    gets(str);
    if(str==NULL)
    {
        exit (1);
    }
    else
    {
        while (1)
        {
            count_consonants(str);
            gets(str);
        }
        
    }

    
    return 0;
}