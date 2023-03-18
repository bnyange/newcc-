#include <stdio.h>
/*trapezium shape*/
void print_form(int n, int m, char c)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%c ",c);
        }
        printf("\n");
        m++;
    }
}
int main()
{
    int n,m;
    char c;
    scanf("%d",&n);
    scanf("%d",&m);
    getchar();
    scanf("%c",&c);

    print_form(n,m,c);

    return 0;
}