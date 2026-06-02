#include <stdio.h>
#include <stdlib.h>



int main(){
    system("clear");
    // Vamos criar uma estrutura de coleção de dados
    // Chamada de array(arranjo).

    int idade [6] = {18,25,17,16,10,21};
    int *pidade = idade;

    printf("Primeiro elemento é %d\n",idade[0]); 
    printf("Primeiro elemento é %d\n",*pidade);
    printf("O endereço do primeiro elemento é %d\n",pidade);

    pidade++;

    printf("O Segundo elemento é %d\n",idade[1]);
    printf("O Segundo elemento é %d\n",*pidade);
    printf("O endereço do segundo elemento é %d\n",pidade);

        pidade++;

    printf("O Terceiro elemento é %d\n",idade[2]);
    printf("O Terceiro elemento é %d\n",*pidade);
    printf("O endereço do segundo elemento é %d\n",pidade);

return 0;
}