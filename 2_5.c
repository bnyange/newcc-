#include <stdio.h>

int main(){

    int a;
    int *ptr_a = &a;
    scanf("%d",&a);

    
    printf("%x\n",&ptr_a);

    *ptr_a += 5;

    printf("%d\n",*ptr_a); 
    printf("%x\n",&ptr_a);






    return 0;
}