#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int multiplicar;
    int dividir;
    int subtrair;

    printf("Digite um numero inteiro e tecle ENTER\n");
    scanf("%d",&num1);

    printf("Digite outro numero inteiro e tecle ENTER\n");
    scanf("%d",&num2);

    // Vamos realizar a soma entre as duas variaveis(num1 e num2)
    // e alocar o resultado na variavel soma
    soma = num1 + num2;
    subtrair = num1 - num2;
    dividir =  num1 / num2;
    multiplicar = num1 * num2;

    printf("\nA soma dos numeros %d e %d resultou em %d\n\n",num1,num2,soma);
    printf("\nA subtração dos numeros %d e %d resultou em %d\n\n",num1,num2,subtrair);
    printf("\nA multiplicação dos numeros %d e %d resultou em %d\n\n",num1,num2,multiplicar);
    printf("\nA divisão dos numeros %d e %d resultou em %d\n\n",num1,num2,dividir);

return 0;    
}