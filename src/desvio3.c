// O programa deve receber 4 notas, realizar o cálculo
// Da média e verificar se:
// - A nota média for maior ou igual a 7, o aluno
// Estara aprovado; caso contrário estará reprovado

#include <stdio.h>
#include <stdlib.h>
int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    float j;

    // Comando System que chama uma execução do sistema operacional 
    // Que neste caso será o comando Clear
    
    system("clear");

    printf("Digite 4 valores e tecle ENTER\n");
    scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);

   

    media = (nota1 + nota2 + nota3 + nota4)/4;
    if(media >= 7)  { 

        printf("A média do aluno foi %.2f, ele foi aprovado\n",media);
    } else
    
    {
        printf("A média do aluno foi %.2f, ele foi reprovado\n",media);
    }

printf("\n##############################################\n");
printf("endereço de memória da variavel nota1 %p \n",&nota1);
printf("endereço de memória da variavel nota2 %p \n",&nota2);
printf("endereço de memória da variavel nota3 %p \n",&nota3);
printf("endereço de memória da variavel nota4 %p \n",&nota4);
printf("##############################################\n");

    return 0;
}