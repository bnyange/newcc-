#include <stdio.h>

double sum25(double v[],int n)
{
    double sum;
    if (n > 5)
    {
        for (int x = 0; x < n; x++)
        {
            sum = v[2]+v[5];  
        }
   
        printf("sum=%lf\n",sum);
    
    }
    else
    {
        printf(" -111\n");
    }
}
    

int main()
{

    int n;
    scanf("%d",&n);

    double v[n];
    for(int x = 0; x < n; x++)
    {
        scanf("%lf",&v[x]);
    }

    sum25(v,n);



    return 0;
}