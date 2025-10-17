#include <stdio.h>

int main () {
    int temperatura; // variavel temepratura

    printf("Digite a temperatura atual: ");
    scanf("%d", &temperatura); //scanf guarda dentro da variavel temperatura o valor inserido pelo usuario, o & guarda o endereço na memoria

  
    if (temperatura < 0) {
        printf("Está muito frio!\n");
    } else if (temperatura >= 0 && temperatura < 20) {
        printf("Está frio.\n");
    } else if (temperatura >= 20 && temperatura < 30) {
        printf("Está agradável.\n");
    } else {
        printf("Está quente!\n");
    }

    return 0;
}


// esta é uma estrutura CONDICIONAL, que permite executar diferentes blocos de código com base em condições específicas.