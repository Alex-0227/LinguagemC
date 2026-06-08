# Estudo da linguagem C
## Aplicada a lógica de programação e algoritmos

<img src= "C_Logo2.png" width ="300" height="300"> 
</p>

---

Estudo das principais estruturas da linguagem de programação C.

Vamos listar os itens trabalhados neste repositório:

    * Variáveis
    * Comandos de entrada e saída(IO-input output):
        *printf
        *scanf
    * Desvio de fluxo Simples (if ... )
    * Desvio de fluxo Mulplo  (if ... else ... )
    * Estrutura de repetição While(Enquanto)
    * Estrutura de repetição For(Para)
    * Função (Módulos)
        - Função Interna (dentro do arquivo .c)
        - Função Externa (Dentro do arquivo .h)
    *Importação de módulos
        - Módulos de linguagem (stdio.h)
        - Módulos do usuário (funcoes.h)
    * Ponteiro
    * Criação de arquivo

#### Demonstração de uma estrutura simples de um arquivo .c

```c
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
```

#### Demonstração de estrutura de repetição

```c
#include <stdio.h>
int main(){
    int i,num,res;
    i = 1;
    // num = 3
    while( i <= 50){
        // res = num * i;
        if( i%3 == 0) {
        printf("Este numero %d é multiplo de 3\n",i);

    }
    i++;
}
    return 0;
}
```