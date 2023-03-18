#include <stdio.h>

int main(){

    float a,b,h;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&h);

    printf("square area =%.6f\n",a*a);
    printf("rectangle area=%.6f\n",a*b);
    printf("triangle area=%.6f\n", a * h * 0.5);
    printf("trapezoid area=%.6f\n",(a+b)*0.5*h);





    return 0;
}