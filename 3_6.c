#include <stdio.h>

float to_pounds(int kg , int g)
{
    float p = ((g/1000.0)+kg)*2.2;
    printf("Result of conversion: %.6f\n",p);
}

int main()
{
    int k,g;
    scanf("%d",&k);
    scanf("%d",&g);

    to_pounds(k,g);



    return 0;
}