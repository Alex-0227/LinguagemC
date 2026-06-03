#include <stdio.h>
#include <stdlib.h>

int main(){
        system("clear");
    int i;
    for(i = 0 ; i < 50 ; i++){
        printf("=");
}
    int j;
    int debito, credito;

    debito = 1;
    credito = 2;
    j = 0;

 printf("\nPrograma de cadastro & vendas\n");
    char nomeCliente[20];
    int idade;
    char nomeVendedor[20];
    char produto[30];
    float valor = 0;


    // ============Cadastro================

    printf("Informe o nome de quem lhe atendeu:\n");
    fgets(nomeVendedor,20,stdin);

    printf("Informe o produto de sua preferência:\n");
    fgets(produto,30,stdin);

    printf("Digite o seu nome:\n");
    fgets(nomeCliente,20,stdin);

    printf("Qual o valor da compra?:\n");
    scanf("%f",&valor);

    // ============================

    printf("Informe a forma de pagamento:\n[1]Débito\n[2]Crédito\n");
    scanf("%d",&j);
    
    if( j <= 1){
    printf("Você selecionou débito [%d].\nVocê terá 10%% de desconto.\n",j);
    valor = valor - (valor * 0.10);

    }else{( j == 2 , j = credito);
    printf("Você selecionou crédito [%d].\nVocê terá um acrescimo de 15%% de taxa.\n",j); 
    valor = valor + (valor * 0.15);

    } 
    printf("O valor total da compra ficou de: %.2f\n",valor);

    // ============================

    // Vamos criar um arquivo de texto para guardar os dados dos clientes

    FILE *arquivo = fopen("Files/cadastro2.txt","w");

    fprintf(arquivo,"<====================================>\n");
    fprintf(arquivo,"Assinatura: %s",nomeCliente);
    fprintf(arquivo,"Atendido por: %s",nomeVendedor);
    fprintf(arquivo,"Compra: %s",produto);
    fprintf(arquivo,"Valor Total: %.2f\n",valor);
    fprintf(arquivo,"<====================================>\n");

    

    return 0;
}