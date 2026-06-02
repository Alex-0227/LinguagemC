#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"

int main (){
    int x ,y , z;
    
    cabecalho();
    printf("\nDigite um número inteiro e tecle ENTER\n");
    scanf("%d",&x);

    printf("\nDigite outro numero inteiro e tecle ENTER\n");
    scanf("%d",&y);

    z = soma(x,y);

    printf("\nO resultado da soma é %d\n",z);
    rodape();

    return 0;

}