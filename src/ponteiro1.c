#include <stdio.h>
#include <stdlib.h>
int main(){

    int A = 35;
    int *ptrA = &A;

    printf("\nO valor da variável A é %d\n",A);
    printf("\nO endereço de memória da variável A é %p\n",ptrA);
    printf("\nO valor que está no endereço da variável A é %d\n",*ptrA);

    return 0;
}