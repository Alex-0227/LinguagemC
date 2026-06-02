#include <stdio.h>
int main(){
// Vamos usar as variaveis com o tipo de dado float, pois,
// Este programa recebe valores com casas decimais.

    float preco;
    float taxa;
    float resultado;
    float Parcelas;
    float resultadoP;

    // Camel Case ( nomeCompletoCliente)
    // Snake Case ( nome_completo_cliente)
    // Simple Case ( nomecompletocliente )
    // NÃO USAR: nome-completo-cliente (Pois o "-"é uma subtração, 
    // e as letras na verdade são binárias, então haveria uma subtração).

    printf("\nDigite o preço do produto a ser aplicado a taxa e pressione ENTER\n\n");
    scanf("%f",&preco);

    printf("\nDigite o valor da taxa a ser aplicada e pressione ENTER\n\n");
    scanf("%f",&taxa);

    printf("\nDigite o numero de parcela e tecle ENTER\n");
    scanf("%f",&Parcelas);

    resultado = preco * ( taxa / 100 ) + preco;
    resultadoP = resultado / Parcelas;
    
    printf("\n A taxa de %.2f%% que foi aplicada sobre %.2f resultou em %.2f.\n E o numero de parcelas ficou em %.2f vezes de %.2f,\n Pressione ENTER\n",taxa,preco,resultado,Parcelas,resultadoP);


return 0;

}

