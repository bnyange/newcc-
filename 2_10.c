#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++ )
    {
        printf("%d days = %d hours\n",i,i*24);
    }

    return 0;
}