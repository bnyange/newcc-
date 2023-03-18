#include <stdio.h>

int main(){

    double x,y;
    int a,b;
    char c,d;

    scanf("%lf",&x);
    scanf("%lf",&y);


    scanf("%d",&a);
    scanf("%d",&b);
    getchar();
    scanf("%c",&c);
    getchar();
    scanf("%c",&d);

    printf("sum of doubles=%lf\n",x+y);
    printf("difference of doubles=%lf\n",x-y);
    printf("square=%.6lf\n",x*x);

    printf("sum of integers=%d\n",a+b);
    printf("product of integers=%d\n",a*b);

    printf("sum of chars=%d\n", (int) (c+d));
    printf("product of chars=%d\n",(int) (c*d));

    printf("sum of chars=%c\n", c+d);
    printf("product of chars=%c\n", c*d);



    return 0;
}