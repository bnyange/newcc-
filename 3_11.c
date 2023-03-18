#include <stdio.h>
#include <string.h>
int main()
{

    char one[100],two[100],th[100],c;
    gets(one);
    gets(two);
    scanf("%c",&c);
    printf("length1=%d\n",strlen(one));
    printf("length2=%d\n",strlen(two));

    printf("concatenation= %s\n", strcat(one,two));
    printf("copy=%s\n",strcpy(th,two));

    if(strcmp(one,two)==1)
    {
        printf("two is smaller than one\n");
    }
    else if(strcmp(one,two)==0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("one is smaller than two\n");
        
    }
    int pos;
    for(pos = 0; two[pos] != c && two[pos] != '\0';)
    {
        pos++;        
    }
    printf("position=%d\n",pos);

    return 0;
}