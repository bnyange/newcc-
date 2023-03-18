#include <stdio.h>

int main(){

    double x,y;
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;

    scanf("%lf",&x);
    scanf("%lf",&y);

    printf("Adress of pointer 1=%p\n",ptr_one);
    printf("Adress of pointer 2 = %p\n",ptr_two);
    printf("Adress of pointer 3=%p\n",ptr_three); 
    



    return 0;
}