#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;

    printf("Digite um numero inteiro e tecle ENTER\n");
    scanf("%d",&num1);

    printf("Digite outro numero inteiro e tecle ENTER\n");
    scanf("%d",&num2);

    // Vamos realizar a soma entre as duas variaveis(num1 e num2)
    // e alocar o resultado na variavel soma
    soma = num1 + num2;

    printf("A soma dos numeros %d e %d resultou em %d\n",num1,num2,soma);

return 0;    
}