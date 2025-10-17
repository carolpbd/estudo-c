#include <stdio.h>

int main () {
    int contador = 0;


    // Laço while pra imprimir números de 0 a 4
    while (contador < 5) {
        printf("Número %d\n", contador);
        contador++; // Incrementa o contador para evitar loop infinito
    }
    return 0;
}

//sempre enquanto a condiçao for verdadeira, o bloco de código dentro do while será executado repetidamente, diferente do for
// que já tem interação, condiçao de parada e incremento definidos em uma única linha. O contador while é inicializado fora do laço e incrementado dentro do bloco do while.