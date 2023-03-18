#include <stdio.h>
#include <math.h>

void proddivpowinv(float a,float b,float*prod,float *div,float *pwr,float *invb)
{
    *prod = a * b;
    *div = a/b;
    *pwr = pow(a,b) ;
    *invb = 1/b;
}
int main()
{
    float a,b,p,d,i,w;
    scanf("%f",&a);
    scanf("%f",&b);

    proddivpowinv(a,b,&p,&d,&w,&i);

    printf("Product =%f\n",p);
    printf("Division =%f\n",d);
    printf("A power B =%f\n",w);
    printf("Inverse of b =%f\n",i);

    return 0;

}