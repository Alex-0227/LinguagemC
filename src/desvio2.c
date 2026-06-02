#include <stdio.h>

int main(){
    int ano;
    printf("Digite um ano inteiro e tecle ENTER\n");
    scanf("%d",&ano);

    if( ano % 4 == 0) { 
        printf("\nO ano %d digitado é bissexto\n",ano);
    } else{
        printf("\nO ano %d NÂO é bissexto\n",ano);
    }

    return 0;
}