#include <stdio.h>

int main(){

    int x,y;
    x = 17;
    y = 4;
    float d = (float) x / (float) (y);

    printf("sum =%d\n", x+y);
    printf("product=%d\n",x*y);
    printf("difference=%d\n", x-y);

    printf("division=%f\n", d);
    printf("the remainder of division=%d\n",x%y);


    return 0; 
}