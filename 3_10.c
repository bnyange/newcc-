#include <stdio.h>

float product(float a, float b)
{
  return a*b;
}

void productbyref(float a,float b,float *p)
{
    *p = a*b;
    return;
}
void modifybyref(float *a, float *b)
{
    
    *a = *a +3;
    *b = *b +11; 
}
int main()
{
    float a,b,p;
    scanf("%f",&a);
    scanf("%f",&b);

   printf("%f\n", product(a,b));
    productbyref(a,b,&p);
    printf("product by ref=%f\n",p);
    modifybyref(&a,&b);
    printf("a = %f b = %f\n",a,b);
}