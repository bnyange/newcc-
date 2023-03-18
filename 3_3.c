#include <stdio.h>

float convert (int cm){

    float km = (float)cm *0.00001;
    printf("Result of conversion: %.6f",km);
}
int main()
{
    int a;
    scanf("%d",&a);

    convert(a);

    return 0;
}