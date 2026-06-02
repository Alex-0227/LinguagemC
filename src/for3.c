    // O programa deve  calcular a potência de um determinado número(base)
    // De acordo com um expoente(potência). O usuário deve informar os dois valores.
    // O programa deve usar estrutura da repetição for para calcular. Ao final deve
    // Exibir o resultado.
#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");

    int b,e,t,i;

    printf("Digite um numero base a ser calculado e tecle ENTER\n");
    scanf("%d",&b);

    printf("Digite o valor do expoente a ser aplicado e tecle ENTER\n");
    scanf("%d",&e);

    t = b;
    for ( i = 1; i < e ; i++){
        t *= b; 
    }
 printf("O resultado é %d\n",t);
 return 0;


}