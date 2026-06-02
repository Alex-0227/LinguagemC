#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero inteiro e tecle ENTER\n");
    scanf("%d",&n);

    if( n % 2 == 0) { 
        printf("O numero %d é par\n",n);
    }

         if( n % 2 == 1) {
        printf("O numero %d é ímpar\n",n);
    }

    return 0;
}