#include <stdio.h>

int main(){

    int t,w,d,h;

    scanf("%d",&w);
    scanf("%d",&d);
    scanf("%d",&h);

    t = h + (d*24) + (w*168);

    printf("number of hours= %d\n",t);


    return 0;
}