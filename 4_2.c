#include<stdio.h>
#include<string.h>

int main(){

    char c[50];
    fgets(c,50,stdin);

    for(int x = 0; x < strlen(c); x++)
    {
        if(x % 2 != 0)
        {
            printf(" %c\n",c[x]);
        }

        else{
            printf("%c\n",c[x]);
        }
    }



    return 0;
}