// Importação da biblioteca padrão de entrada e saída

#include <stdio.h> 
// O programa iniciar e executa a partir da função main

int main(){

    // Declaração da variável j com o tipo int(inteiro)
    int j;

    // Vamos pedir ao usuário digitar um valor 
    // Inteiro para ser guardado na variável j

    printf("\nDigite um numero inteiro e tecle ENTER\n");
    // O comando scanf será ultilizado para capturar o
    // numero inteiro que o usuário irá digitar. O caracter
    // f do scan é usado para indicar qual será o formato 
    // de dados digitado pelo usuário. Neste caso, usaremos
    // %d, que indica que o usuário digitou é um numero
    // decimal. Este numero será alocado no endereço de
    // memória da variável j. Portanto, usaremos &j para 
    // indicar o endereço da variavel

    scanf("%d",&j);
    printf("\nO valor digitado pelo usuário é %d\n\n", j);
    return 0; // Informa ao compilador que o programa acabou
}
