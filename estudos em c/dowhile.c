#include <stdio.h>

int main () {
    int contador = 0; // variavel contador iniciada em 0

   // laco do while para imprimir numeros de 0 a 4

   do {
    printf("Número %d\n", contador);
    contador++; // incrementa o contador para evitar loop infinito
   } while (contador < 5); // aqui é o teste condicional, diferente do while que testa antes de entrar no bloco, o do while testa depois de executar o bloco

    return 0;
}