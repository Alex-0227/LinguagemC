#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char *PrimeiroNome;

    printf("Digite o seu nome e tecle ENTER\n");
    scanf("%s",PrimeiroNome);

    printf("Olá, Sr(a). %s\n",PrimeiroNome);

    return 0;

}