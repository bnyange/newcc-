#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int count_consonants(char str[])
{
    int c,i=0;
    for(c =0; str[c]!= '\0';c++)
    {
        if(str[c]== 'a'|| str[c]== 'e'|| str[c]== 'i'|| str[c]== 'o'|| str[c]== 'u'|| str[c]== ' ')
        {
            i++;
        }    
    }

    printf("Number of consonants=%d\n",c-i);
}

int main()
{
    
    char str[100];
    gets(str);
    if(str==NULL)
    {
        printf("\n");
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