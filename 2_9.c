#include <stdio.h>

int main(){

    char c;
    scanf("%c",&c);

    int v = (int) (c);

       
    if (v >=47 && v<=57)
    {
        printf("%c is a number\n",c);
    }
    else if ((v>=66 && v<=90 )|| (v>=97 && v<=122))
    {
        printf("%c is a letter\n",c);
    }
    else
    {
        printf("%c is some other symbol\n",c);
    }


    return 0;
}