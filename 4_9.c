#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prodinmax(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    
    for (int x = 1; x < n; x++)
    {
       if(arr[x] > max)
        {
            max = arr[x];
        }   
       else if(arr[x]< min)
        {
            min = arr[x];
        }    
    }
    printf("Product of both numbers is = %d\n",max * min);
}
int main()
{
    int n;
    scanf("%d",&n);

    int *arr=(int*) malloc (n*sizeof(int)) ;

    if (arr == NULL) {printf("Memory is not there\n");   }

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    prodinmax(arr,n);


    return 0;
}