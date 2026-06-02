#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nomeCompleto[30];
    // Vamos usar uma função para obter
    // Todos os caracteres digitados pelo usuário
    // na tela do terminal.
    // O nome da função é fgets.

    printf("Digite o seu nome completo\n");
    fgets(nomeCompleto,30,stdin);
    printf("Olá, Sr(a) %s\n",nomeCompleto);

    return 0;


}