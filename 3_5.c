#include <stdio.h>

int main()
{
    char c;
    double r[100],sum,avg;
    scanf("%c",&c);
    int n;
    scanf("%d",&n);

    for(int x = 0; x < n; x++ )
    {   
        scanf("%lf",&r[x]);
    }

    switch (c)
    {
        case 's':
            for(int x = 0; x < n; x++)
            {
                sum +=r[x];
                printf("%lf\n",sum);
            }
        break;

        case 'p':
            for (int x = 0; x < n; x++)
            {
                printf("%.2lf\n",r[x]);
            }
        break;

        case 't':
            for(int x = 0; x < n; x++)
            {
                printf("%.2lf\n",(r[x]*9.0/5.0)+32.0);
            }
        break;

        default:
            for(int x = 0; x < n; x++)
            {
                sum+= r[x];
               
            }   printf("%.2lf\n",sum/n);  
        break;
    }

    return 0;
}