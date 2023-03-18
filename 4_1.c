#include <stdio.h>
#include<math.h>

int main()
{
    float x,z,y;

    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);  
  
    for(float c = x; c <= y; c+=z)
    {
        printf("%.6f %.6f %.6f\n",c,M_PI*c*c,M_PI*c*2);
    }


    return 0;
}