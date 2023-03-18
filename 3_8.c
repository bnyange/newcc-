#include <stdio.h>

float sum(float f[],int n)
{
    float sum = 0.0;
    for(int x = 0; x < n; x++)
    {
        if(f[x]!=-99.0)
        {
            sum += f[x];
        }
        
    }
    printf("sum = %.2f\n",sum);
}

float avg(float f[],int n)
{
    float avg = 0.0;
    float sum = 0.0;
    for(int x = 0; x < n; x++)
    {
        if(f[x]!=-99.0)
        {
            sum += f[x];
        } 
        
    }
    printf("avg = %.2f\n",sum / n);

}
int main()
{
    float f[10];
    int n = 0;

    while(n < 10)
    {
        scanf("%f",&f[n]);
        if(f[n] == -99.0)
        {
            break;
        }
        n++;
    }
    sum(f,n);
    avg(f,n);
    
    return 0;
}